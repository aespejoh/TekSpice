/*
** EPITECH PROJECT, 2021
** execute.cpp.cc
** File description:
** execute.cpp.cc
*/

#include "include/execute/execute.hpp"

nts::execute::execute() : _end{false} {}

nts::execute::~execute() {}

bool nts::execute::getEnd()
{
    return (_end);
}