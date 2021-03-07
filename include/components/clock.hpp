/*
** EPITECH PROJECT, 2021
** nanoTekSpice
** File description:
** Created by aespejo,
*/
#ifndef NANOTEKSPICE_CLOCK_HPP
#define NANOTEKSPICE_CLOCK_HPP

#include "IComponent.hpp"

namespace nts {
    class Clock : public IComponent {
        public:
            Clock();
            void setConnections(int pin1, int pin2, int outputPin) override;
            void simulate(std::size_t tick) override;
            Tristate compute(std::size_t pin) override;
            void setLink(std::size_t pin, IComponent *other, std::size_t otherPin) override;
            void dump() override;
    };
}
#endif //NANOTEKSPICE_CLOCK_HPP
