/*
** EPITECH PROJECT, 2021
** Execute.cpp.cc
** File description:
** Execute.cpp.cc
*/

#include <iostream>
#include "include/execute/Execute.hpp"
#include "include/exceptions/executeException.hpp"

nts::Execute::Execute() : _end{false}, _tick{0}
{
    _execution.insert(std::make_pair("simulate", &nts::Execute::simulate));
    _execution.insert(std::make_pair("exit", &nts::Execute::exit));
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
    pos = command.find("=");
    token = command.substr(0, pos);
    command.erase(0, pos + 1);

    IComponent *elem = nullptr;
    for (auto &element : graph->getComponents()) {
        if (element->getName() == token)
            elem = element;
    }
    auto p_map = elem->getMap();
    p_map->getPins();
    std::cout  << elem->getValue() << std::endl;
    if (command == "0")
        elem->setValue(FALSE);
    else if (command == "1")
        elem->setValue(TRUE);
    else
        elem->setValue(UNDEFINED);
}

void nts::Execute::exec(std::string &type)
{
    auto it = _execution.find(type);
    if (it == _execution.end())
        throw nts::executeException("Command not found");
    (this->*it->second)();
}

bool nts::Execute::getEnd()
{
    return (_end);
}

void nts::Execute::simulate()
{
    _tick += 1;
    std::cout << "Tick == " << _tick << std::endl;
}

void nts::Execute::exit()
{
    _end = true;
}

void nts::Execute::display()
{

}

void nts::Execute::dump()
{

}
