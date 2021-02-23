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

namespace nts {
    class CircuitFactory {
        public:
            CircuitFactory();
            std::unique_ptr<nts::IComponent> createComponent(const std::string &type);
        private:
            std::vector<std::string> _components_ptr_list_str;
            std::vector<std::unique_ptr<nts::IComponent>> _components_ptr_list;
            std::unique_ptr<nts::IComponent> create4081() const noexcept;
            std::unique_ptr<nts::IComponent> create4001() const noexcept;
            std::unique_ptr<nts::IComponent> createInput() const noexcept;
            std::unique_ptr<nts::IComponent> createOutput() const noexcept;
    };
}
#endif //BOOTSTRAP_CIRCUITFACTORY_HPP
