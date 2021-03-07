/*
** EPITECH PROJECT, 2021
** nanoTekSpice
** File description:
** Created by aespejo,
*/
#include "c4069.hpp"

nts::C4069::C4069()
{
    _map.addPin(Pin::I, UNDEFINED, this);
    _map.addPin(Pin::O, UNDEFINED, this);
    _map.addPin(Pin::I, UNDEFINED, this);
    _map.addPin(Pin::O, UNDEFINED, this);
    _map.addPin(Pin::I, UNDEFINED, this);
    _map.addPin(Pin::O, UNDEFINED, this);
    _map.addPin(Pin::I, UNDEFINED, this);
    _map.addPin(Pin::O, UNDEFINED, this);
    _map.addPin(Pin::I, UNDEFINED, this);
    _map.addPin(Pin::O, UNDEFINED, this);
    _map.addPin(Pin::I, UNDEFINED, this);
    _map.addPin(Pin::O, UNDEFINED, this);
    _map.addPin(Pin::I, UNDEFINED, this);
}

nts::C4069::~C4069()
{
}

void nts::C4069::simulate(std::size_t tick)
{
}

nts::Tristate nts::C4069::compute(std::size_t pin)
{
    return nts::FALSE;
}

void nts::C4069::setLink(std::size_t pin, nts::IComponent *other,
    std::size_t otherPin
)
{
}

void nts::C4069::setConnections(int pin1, int pin2, int outputPin)
{
}

void nts::C4069::dump() const
{
}
