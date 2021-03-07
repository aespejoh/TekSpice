/*
** EPITECH PROJECT, 2021
** nanoTekSpice
** File description:
** Created by aespejo,
*/
#ifndef NANOTEKSPICE_INPUT_HPP
#define NANOTEKSPICE_INPUT_HPP

#include "IComponent.hpp"
#include "pinMap.hpp"

namespace nts {
    class Input : public nts::IComponent {
        public:
            Input();
            ~Input();
            void simulate(std::size_t tick) override;
            Tristate compute(std::size_t pin) override;
            void setLink(std::size_t pin, IComponent *other, std::size_t otherPin
            ) override;
            void dump() override;
            void setConnections(int pin1, int pin2, int outputPin) override;
    };
}

#endif //NANOTEKSPICE_INPUT_HPP
