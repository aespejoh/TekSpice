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

int nts::PinMap::get_number_pin() const
{
    return n_pin;
}

std::vector<nts::Pin> * nts::PinMap::getPins()
{
    return &_pins;
}

void nts::PinMap::addPin(nts::Pin::Type type, nts::Tristate state, nts::IComponent* component)
{
    Pin pin(type, state, component, n_pin);
    _pins.push_back(pin);
    n_pin++;
}

nts::Pin *nts::PinMap::getpin_N(int n)
{
    return &_pins[n - 1];
}
