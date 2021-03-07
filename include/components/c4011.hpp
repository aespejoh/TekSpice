/*
** EPITECH PROJECT, 2021
** nanoTekSpice
** File description:
** Created by aespejo,
*/
#ifndef NANOTEKSPICE_C4011_HPP
#define NANOTEKSPICE_C4011_HPP

#include "IComponent.hpp"

namespace nts {
    class C4011 : public nts::IComponent {
        public:
            C4011();
            ~C4011();
            void simulate(std::size_t tick) override;
            Tristate compute(std::size_t pin) override;
            void setLink(std::size_t pin, IComponent *other, std::size_t otherPin) override;
            void setConnections(int pin1, int pin2, int outputPin) override;
            void dump() override;

    };
}
#endif //NANOTEKSPICE_C4011_HPP
