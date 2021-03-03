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
    _component = nullptr;
}

nts::Pin::Pin(nts::Pin::Type type, nts::Tristate state) : _state(state), _type(type)
{
    _component = nullptr;
}

std::string nts::Pin::getPrintState()
{
    if (_state == UNDEFINED)
        return "U";
    else if (_state == FALSE)
        return "0";
    else
        return "1";
}

nts::Pin::Pin(nts::Pin::Type type, nts::Tristate state, nts::IComponent *component, int n)
: _state(state), _type(type), _component(component), _n(n+1)
{

}

int nts::Pin::getN() const
{
    return _n;
}
