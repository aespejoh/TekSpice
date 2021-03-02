/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/
#ifndef BOOTSTRAP_C4001_HPP
#define BOOTSTRAP_C4001_HPP

#include "IComponent.hpp"
#include "pinMap.hpp"
#include "componentCreator.hpp"

namespace nts {
    class C4001 : public nts::IComponent {
        public:
            C4001();
            ~C4001();
            void simulate(std::size_t tick) override;
            Tristate compute(std::size_t pin) override;
            void setLink(std::size_t pin, IComponent &other, std::size_t otherPin) override;
            void dump() const override;
            PinMap _map;
    };
}
#endif //BOOTSTRAP_C4001_HPP
