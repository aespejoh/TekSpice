/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/
#include "include/pin.hpp"

void nts::Pin::setComponent(nts::IComponent &component)
{
    _component = &component;
}

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

nts::Pin::Pin(nts::Pin::Type type, nts::Tristate state, nts::IComponent *component) : _type(type),
_state(state), _component(component)
{
}

nts::Pin::Pin()
{
    _type = U;
    _state = nts::UNDEFINED;
    _component = nullptr;
}