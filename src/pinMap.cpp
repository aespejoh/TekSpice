/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/
#include "include/pinMap.hpp"

nts::PinMap::PinMap()
{
    n_pin = 0;
}

int nts::PinMap::getNPin() const
{
    return n_pin;
}

const std::vector<nts::Pin> &nts::PinMap::getPins() const
{
    return _pins;
}

void nts::PinMap::addPin(nts::Pin::Type type, nts::Tristate state, nts::IComponent *component)
{
    Pin pin(type, state, component);
    _pins.push_back(pin);
}
