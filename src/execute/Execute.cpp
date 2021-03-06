/*
** EPITECH PROJECT, 2021
** Execute.cpp.cc
** File description:
** Execute.cpp.cc
*/

#include <iostream>
#include "include/execute/Execute.hpp"
#include "include/exceptions/executeException.hpp"
#include <csignal>

bool nts::Execute::_stop {false};

void nts::Execute::mainLoop(nts::graph graph)
{
    std::string command;
    while (!_end) {
        std::cout << "> ";
        getline(std::cin, command);
        if (std::cin.eof())
            exit();
        else
            checkCommand(command, &graph);
    }
}

nts::Execute::Execute(nts::graph *graph) : _graph(graph), _end{false}, _tick{0}
{
    _execution.insert(std::make_pair("simulate", &nts::Execute::simulate));
    _execution.insert(std::make_pair("exit", &nts::Execute::exit));
    _execution.insert(std::make_pair("display", &nts::Execute::display));
    _execution.insert(std::make_pair("loop", &nts::Execute::loop));
    _execution.insert(std::make_pair("dump", &nts::Execute::dump));
}

nts::Execute::~Execute() {}

void nts::Execute::checkCommand(std::string &command, nts::graph *graph)
{
    if (command.find('=') != std::string::npos)
        changeValue(command, graph);
    else
        exec(command);
}

void nts::Execute::changeValue(std::string& command, graph *graph)
{
    std::vector<std::string> values;

    size_t pos = 0;
    std::string token;
    pos = command.find('=');
    token = command.substr(0, pos);
    command.erase(0, pos + 1);

    IComponent *elem = nullptr;
    for (auto &element : *graph->getComponents()) {
        if (element->getName() == token)
            elem = element;
    }
    if (elem == nullptr) {
        std::cout << "Component '" << token << "' not found" << std::endl;
        return;
    }
    if (elem->getType() != "input" && elem->getType() != "clock") {
        std::cout << "Component '" << token << "' it is nether an input nor a clock" << std::endl;
        return;
    }
    Pin *pin = elem->getMap()->getpin_N(1);
    if (pin == nullptr) // no component found invalid component
        return;
    if (command == "0")
        pin->setState(FALSE);
    else if (command == "1")
        pin->setState(TRUE);
    else
        pin->setState(UNDEFINED);
}

void nts::Execute::exec(std::string &type)
{
    auto it = _execution.find(type);
    if (it == _execution.end()) {
        std::cout << type << ": command not found" << std::endl;
        return;
    }
    (this->*it->second)();
}

bool nts::Execute::getEnd()
{
    return (_end);
}

void nts::Execute::simulate()
{
    update();
    _tick++;
    IComponent *elem;
    Pin *pin;
    Pin *pin1;
    Pin *pin2;
    for (auto &element : *_graph->getComponents()) {
        if (element->getType() == "clock")
            element->compute(1);
        if (element->getType() == "output")
            pin = element->getMap()->getpin_N(1);
        for (auto &el : *_graph->getPinGraph()) {
            auto i = std::find(el.begin(), el.end(), pin);
            if (i != el.end()) {
                pin1 = el[0];
                pin2 = el[1];
                if (pin1->getComponent()->getType() == "output")
                    pin1->setState(pin2->getComponent()->compute(pin2->getN()));
                else if (pin2->getComponent()->getType() == "output")
                    pin2->setState(pin1->getComponent()->compute(pin1->getN()));
            }
        }
    }
}

void nts::Execute::exit()
{
    _end = true;
}

void nts::Execute::display()
{
    std::cout << "tick: " << _tick << std::endl;
    std::cout << "input(s):" << std::endl;
    for (auto &element : *_graph->getComponents()) {
        if ((element->getType() == "input" || element->getType() == "clock" ||
        element->getType() == "true" || element->getType() == "false")
        && !element->getMap()->getPins()->empty())
            std::cout << "\t " << element->getName() << ": " <<
            element->getMap()->getpin_N(1)->getPrintState() << std::endl;
    }
    std::cout << "output(s):" << std::endl;
    for (auto &element : *_graph->getComponents()) {
        if (element->getType() == "output" && !element->getMap()->getPins()->empty())
            std::cout << "\t " << element->getName() << ": " <<
            element->getMap()->getpin_N(1)->getPrintState() << std::endl;
    }
}

void nts::Execute::dump()
{
    for (auto &element : *_graph->getComponents())
        element->dump();
}

void nts::Execute::update()
{
    for (auto &i : *_graph->getPinGraph()) {
        if (i[0] != nullptr && i[1] != nullptr)
            if (i[0]->getState() != UNDEFINED)
                i[1]->setState(i[0]->getState());
    }
}

void nts::Execute::loop()
{
    _stop = false;
    std::signal(SIGINT, Execute::stop);
    while (!_stop) {
        simulate();
        display();
    }
    std::signal(SIGINT, SIG_DFL);
}

void nts::Execute::stop(int)
{
    _stop = true;
}
