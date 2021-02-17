/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/
#ifndef BOOTSTRAP_C4081_HPP
#define BOOTSTRAP_C4081_HPP

#include "include/IComponent.hpp"
#include "include/pinMap.hpp"
#include "componentCreator.hpp"

namespace nts {
    class C4081 : public IComponent {
        public:
            C4081();
            ~C4081();

        void simulate(std::size_t tick) override;
        Tristate compute(std::size_t pin) override;
        void setLink(std::size_t pin, IComponent &other, std::size_t otherPin) override;
        void dump() const override;

        private:
            PinMap _map;
    };
}
#endif //BOOTSTRAP_C4081_HPP
