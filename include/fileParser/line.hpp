/*
** EPITECH PROJECT, 2021
** parser.hpp.h
** File description:
** parser.hpp.h
*/
#ifndef NANOTEKSPICE_LINE_HPP
#define NANOTEKSPICE_LINE_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include "pin.hpp"

namespace nts {
    class Line {
    public:
        Line(std::string &line);
        void removeComment();
        void sepSpaces();
        std::vector<std::string> getComponents();

    private:
        std::string &_line;
        std::vector<std::string> _components;
    };
}

#endif //NANOTEKSPICE_LINE_HPP
