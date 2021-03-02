/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/
#include "include/pin.hpp"

void nts::Pin::setState(nts::Tristate state)
{
    _state = state;
}

nts::Pin::Type nts::Pin::getType() const
{
    return _type;
}

void nts::Pin::setType(nts::Pin::Type type)
{
    _type = type;
}

nts::Tristate nts::Pin::getState()
{
    return _state;
}


nts::Pin::Pin()
{
    _type = U;
    _state = nts::UNDEFINED;
}

nts::Pin::Pin(nts::Pin::Type type, nts::Tristate state) : _state(state), _type(type)
{

}
