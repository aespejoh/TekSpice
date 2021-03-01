/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/
#ifndef BOOTSTRAP_CIRCUITFACTORY_HPP
#define BOOTSTRAP_CIRCUITFACTORY_HPP

#include "IComponent.hpp"
#include "c4081.hpp"
#include "c4001.hpp"
#include "input.hpp"
#include "output.hpp"
#include <map>

namespace nts {
    class CircuitFactory {
        public:
            CircuitFactory();
            std::unique_ptr<nts::IComponent> createComponent(const std::string &type);
            typedef std::unique_ptr<nts::IComponent>(CircuitFactory::*fnc_ptr)();
            typedef std::map<std::string, fnc_ptr> map_t;
        private:
            map_t _command_list;
            std::unique_ptr<nts::IComponent> create4081();
            std::unique_ptr<nts::IComponent> create4001();
            std::unique_ptr<nts::IComponent> createInput();
            std::unique_ptr<nts::IComponent> createOutput();
    };
}
#endif //BOOTSTRAP_CIRCUITFACTORY_HPP
