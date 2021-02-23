/*
** EPITECH PROJECT, 2021
** graph.cpp.cc
** File description:
** graph.cpp.cc
*/

#include "graph.hpp"

nts::graph::graph(nts::File *file)
{
    std::string line;

    while (file->nextLine(line)) {
        nts::Parser parse(line);
        if (line == ".links:") {
            is_link = true;
            is_chipset = false;
        } else if (line == ".chipsets:") {
            is_link = false;
            is_chipset = true;
        }
        sepParse(parse);
    }
}

void nts::graph::sepParse(nts::Parser parse)
{
    if (is_chipset) {
        for (int i = 0; i < parse.getComponents().size(); i++) {
            if (parse.getComponents()[i] == "input")
                sepInputs(parse.getComponents()[i += 1]);
            else if (parse.getComponents()[i] == "output")
                sepOutputs(parse.getComponents()[i += 1]);
            else if (parse.getComponents()[i] == "4081")
                sepCircuit(parse.getComponents()[i += 1]);
        }
    } else if (is_link) {
        for (int i = 0; i < parse.getComponents().size(); i += 2) {
            if (parse.getComponents()[i] != ".links:")
                createGraph(parse.getComponents()[0],
                            parse.getComponents()[1]);
        }
    }
}

std::string nts::graph::getName(std::string component)
{
    size_t found = component.find(':');
    std::string name = component.substr(0, found);
    return name;
}

int nts::graph::getValue(std::string component)
{
    size_t found = component.find(':');
    std::string values = component.substr(found + 1);
    int value = 0;
    std::stringstream _value(values);
    _value >> value;
    return (value);
}

/*void nts::graph::displayGraph()
{
    for (int i = 0; i < _graph.size(); ++i) {
        for (int j = 0; j < _graph[i]; ++j) {
            
        }
    }
}*/

nts::graph::component nts::graph::getComponent(std::string name)
{
    component component;

    for (int i = 0; i < _components.size(); ++i) {
        if (_components[i].name == name) {
            component.name = _components[i].name;
            component.value = _components[i].value;
            component.type = _components[i].type;
            return component;
        }
    }
    return component;
}

void nts::graph::createGraph(const std::string& componentOne,
                             const std::string& componentTwo)
{
    std::vector<component> tmp;
    //setValue(componentOne);
    //setValue(componentTwo);
    std::string nameOne = getName(componentOne);
    std::string nameTwo = getName(componentTwo);
    component firstComponent = getComponent(nameOne);
    component secondComponent = getComponent(nameTwo);

    tmp.push_back(firstComponent);
    tmp.push_back(secondComponent);

    _graph.push_back(tmp);
}

/*void nts::graph::setValue(std::string component)
{
    std::string name = getName(component);
    int value = getValue(component);

    for (int i = 0; i < _chipsets.size(); ++i) {
        if (_chipsets[i].name == name &&
        (_chipsets[i].type == INPUTS || _chipsets[i].type == OUTPUTS)) {
            if (value == 1)
                _chipsets[i].value = TRUE;
            else if (value == 0)
                _chipsets[i].value = FALSE;
            else
                _chipsets[i].value = UNDEFINED;
        }
    }
}*/

void nts::graph::sepInputs(std::string component)
{
    _components.push_back(createComponent(component, INPUTS));
}

void nts::graph::sepOutputs(std::string component)
{
    _components.push_back(createComponent(component, OUTPUTS));
}

void nts::graph::sepCircuit(std::string component)
{
    _components.push_back(createComponent(component, CIRCUIT));
}

nts::graph::component nts::graph::createComponent(std::string name, Type type)
{
    component component;

    component.name = name;
    component.type = type;
    component.value = UNDEFINED;
    return component;
}