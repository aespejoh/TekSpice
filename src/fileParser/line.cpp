/*
** EPITECH PROJECT, 2021
** parser.cpp.cc
** File description:
** parser.cpp.cc
*/

#include "include/fileParser/line.hpp"

nts::Line::Line(std::string &line) : _line(line)
{
    removeComment();
    sepSpaces();
}

void nts::Line::removeComment()
{
    auto it{ std::find_if(_line.begin(), _line.end(), [](char c) {
        return c == '#';
    }) };

    _line.erase(it, _line.end());
}

void nts::Line::sepSpaces()
{
    _components.clear();

    std::stringstream ss{ _line };
    std::string sep;

    while (std::getline(ss, sep, ' ')) {
        if (!sep.empty()) {
            _components.push_back(sep);
        }
    }
}

std::vector<std::string> nts::Line::getComponents()
{
    return _components;
}