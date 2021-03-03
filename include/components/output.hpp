/*
** EPITECH PROJECT, 2021
** nanoTekSpice
** File description:
** Created by aespejo,
*/
#ifndef NANOTEKSPICE_OUTPUT_HPP
#define NANOTEKSPICE_OUTPUT_HPP

#include "IComponent.hpp"
#include "pinMap.hpp"

namespace nts {
    class Output : public nts::IComponent {
        public:
        Output();
        ~Output();
        void simulate(std::size_t tick) override;
        Tristate compute(std::size_t pin) override;
        void setLink(std::size_t pin, IComponent *other, std::size_t otherPin
        ) override;
        void dump() const override;
        void setConnections(int pin1, int pin2, int outputPin) override;
    };
}

#endif //NANOTEKSPICE_OUTPUT_HPP
