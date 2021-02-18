/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/
#ifndef BOOTSTRAP_PARSER_HPP
#define BOOTSTRAP_PARSER_HPP

#include <istream>
#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <vector>

class Parser {
    public:
        void readfile(std::string const &filename);
    private:
        void clean_str(std::string *);
        bool check_comment(std::string const&);
        bool check_chipset(std::string const&);
        void parse_chipset(std::ifstream*);
        void remove_extra_space(std::string *input);
        std::vector<std::string> _instructions;
};

#endif //BOOTSTRAP_PARSER_HPP
