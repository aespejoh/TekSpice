/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/
#include <sstream>
#include "include/componentCreator.hpp"

nts::PinMap nts::ComponentCreator::create_map(const std::string& filename, IComponent *component)
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
            if (type == "input")
                map.addPin(Pin::I, UNDEFINED, component);
        }
    }

    return map;
}
