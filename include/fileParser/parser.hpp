/*
** EPITECH PROJECT, 2021
** parser.hpp.h
** File description:
** parser.hpp.h
*/
#ifndef NANOTEKSPICE_PARSER_HPP
#define NANOTEKSPICE_PARSER_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include "pin.hpp"

namespace nts {
    class Parser {
    public:
        Parser(std::string &line);
        void removeComment();
        void sepSpaces();
        std::vector<std::string> getComponents(void);

    private:
        std::string &_line;
        std::vector<std::string> _components;
    };
}

#endif //NANOTEKSPICE_PARSER_HPP
