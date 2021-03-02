/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/
#include "include/components/c4001.hpp"

nts::C4001::C4001()
{
    ComponentCreator creator;
    _map = creator.create_map_chipset("nts/4001.nts");
}

nts::C4001::~C4001()
{
}

void nts::C4001::simulate(std::size_t tick)
{
}

nts::Tristate nts::C4001::compute(std::size_t pin)
{
    return nts::FALSE;
}

void nts::C4001::setLink(std::size_t pin, nts::IComponent &other,
    std::size_t otherPin
)
{
}

void nts::C4001::dump() const
{
}
