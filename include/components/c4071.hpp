/*
** EPITECH PROJECT, 2021
** nanoTekSpice
** File description:
** Created by aespejo,
*/
#ifndef NANOTEKSPICE_C4071_HPP
#define NANOTEKSPICE_C4071_HPP

#include "IComponent.hpp"

namespace nts {
    class C4071 : public IComponent {
        public:
        C4071();
        ~C4071();
        void simulate(std::size_t tick) override;
        Tristate compute(std::size_t pin) override;
        void setLink(std::size_t pin, IComponent *other, std::size_t otherPin) override;
        void setConnections(int pin1, int pin2, int outputPin) override;
        void dump() const override;
    };
}
#endif //NANOTEKSPICE_C4071_HPP