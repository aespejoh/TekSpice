/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/
#include "include/parser.hpp"

void Parser::readfile(const std::string &filename)
{
    std::ifstream infile(filename);
    std::string line;
    while (std::getline(infile, line)) {
        if (check_comment(line))
            continue;
        if (check_chipset(line))
            parse_chipset(&infile);
    }
}

bool Parser::check_comment(const std::string &str)
{
    return str[0] == '#';
}

bool Parser::check_chipset(const std::string &str)
{
    return str == ".chipsets:";
}

void Parser::parse_chipset(std::ifstream *infile)
{
    std::string line;
    while (std::getline(*infile, line)) {
        if (line[0] == '.')
            return;
        remove_extra_space(&line);
        std::cout << line << std::endl;
        _instructions.push_back(line);
    }
}

void Parser::clean_str(std::string *str)
{
    str->erase(remove_if(str->begin(), str->end(), isspace), str->end());
}

void Parser::remove_extra_space(std::string *input)
{
    std::string output;
    unique_copy (input->begin(), input->end(), std::back_insert_iterator<std::string>(output),
            [](char a,char b){ return isspace(a) && isspace(b);});
    *input = output;
}
