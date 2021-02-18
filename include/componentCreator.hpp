/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/
#ifndef BOOTSTRAP_COMPONENTCREATOR_HPP
#define BOOTSTRAP_COMPONENTCREATOR_HPP

#include <iostream>
#include "pinMap.hpp"
#include <fstream>

namespace nts {
    class ComponentCreator {
        public:
            PinMap create_map_chipset(const std::string& filename, IComponent *component);
    };
}
#endif //BOOTSTRAP_COMPONENTCREATOR_HPP
