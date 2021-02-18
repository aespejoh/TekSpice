/*
** EPITECH PROJECT, 2021
** nanoTekSpice
** File description:
** Created by aespejo,
*/
#include "core.hpp"
#include "parser.hpp"

std::vector<std::string> Core::array_to_vector(char **av)
{
    std::vector<std::string> vector;

    for (int i = 0; av[i] != nullptr; i++)
        vector.emplace_back(av[i]);
    return vector;
}

void Core::init()
{
    Parser parser;
    parser.readfile(_av[1]);
}

Core::Core(int ac, char **av) : _ac(ac)
{
    _av = array_to_vector(av);
}
