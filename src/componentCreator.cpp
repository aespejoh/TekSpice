/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/
#include <sstream>
#include "include/componentCreator.hpp"

void add_to_map(nts::PinMap *map, std::string name, std::string type)
{
    if (type == "input")
        map->addPin(nts::Pin::I, nts::UNDEFINED);
    else if (type == "output")
        map->addPin(nts::Pin::O, nts::UNDEFINED);
}

nts::PinMap nts::ComponentCreator::create_map_chipset(const std::string &filename)
{
    PinMap map;
    std::ifstream infile(filename);
    std::stringstream linestream;
    std::string line;
    std::string type, name;
    getline(infile, line);
    if (line == ".chipsets:") {
        while (std::getline(infile, line)) {
            type = line.substr(0, line.find(' '));
            name = line.substr(line.find(' ') + 1, std::string::npos);
            add_to_map(&map, name, type);
        }
    }
    return map;
}