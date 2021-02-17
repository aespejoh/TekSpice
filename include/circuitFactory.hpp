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

namespace nts {
    class CircuitFactory {

        struct Components_ptr
        {
            std::string type;
            std::unique_ptr<nts::IComponent>(*func)();
        };
        public:
            CircuitFactory();
            std::unique_ptr<nts::IComponent> createComponent(const std::string &type);
        private:
            static Components_ptr fill_vector(std::string type, std::unique_ptr<IComponent>(*func)());
            std::vector<Components_ptr> _components_ptr_list;
            static std::unique_ptr<nts::IComponent> create4081();

    };
}
#endif //BOOTSTRAP_CIRCUITFACTORY_HPP
