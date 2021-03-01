/*
** EPITECH PROJECT, 2021
** nanoTekSpice
** File description:
** Created by aespejo,
*/
#ifndef NANOTEKSPICE_CORE_HPP
#define NANOTEKSPICE_CORE_HPP

#include <vector>
#include <string>

class Core {
    public:
    Core(int ac, char **av);

    void init();
        bool call_checks();
    private:
        std::vector<std::string>array_to_vector(char **av);
        int _ac;
        std::vector<std::string> _av;

};

#endif //NANOTEKSPICE_CORE_HPP
