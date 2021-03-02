/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/

#include "include/IComponent.hpp"

nts::Tristate nts::IComponent::getValue() const
{
    return _value;
}

void nts::IComponent::setValue(Tristate value)
{
    _value = value;
}

nts::PinMap *nts::IComponent::getMap()
{
    return &_map;
}