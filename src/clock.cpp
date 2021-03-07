/*
** EPITECH PROJECT, 2021
** nanoTekSpice
** File description:
** Created by aespejo,
*/
#include "clock.hpp"

nts::Clock::Clock()
{

}

void nts::Clock::simulate(std::size_t tick)
{
}

nts::Tristate nts::Clock::compute(std::size_t pin)
{
    return FALSE;
}

void nts::Clock::setLink(std::size_t pin, nts::IComponent *other,
    std::size_t otherPin
)
{
}

void nts::Clock::dump() const
{
}

void nts::Clock::setConnections(int pin1, int pin2, int outputPin)
{
}
