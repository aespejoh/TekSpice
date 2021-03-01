/*
** EPITECH PROJECT, 2021
** execute.cpp.cc
** File description:
** execute.cpp.cc
*/

#include <iostream>
#include "include/execute/execute.hpp"

nts::execute::execute() : _end{false}, _tick{0}
{
    _execution.insert(std::make_pair("simulate", &nts::execute::simulate));
    _execution.insert(std::make_pair("exit", &nts::execute::exit));
}

nts::execute::~execute() {}

void nts::execute::exec(const std::string &type)
{
    auto it = _execution.find(type);
    (this->*it->second)();
}

bool nts::execute::getEnd()
{
    return (_end);
}

void nts::execute::simulate()
{
    _tick += 1;
    std::cout << "Tick == " << _tick << std::endl;
}

void nts::execute::exit()
{
    _end = true;
}

void nts::execute::display()
{

}

void nts::execute::dump()
{

}