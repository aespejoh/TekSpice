/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/
#include "c4081.hpp"
#include "componentCreator.hpp"

void nts::C4081::simulate(std::size_t tick)
{
}

nts::Tristate nts::C4081::compute(std::size_t pin)
{
    return FALSE;
}

void nts::C4081::setLink(std::size_t pin, nts::IComponent &other,
    std::size_t otherPin
)
{
}

void nts::C4081::dump() const
{
}

nts::C4081::C4081()
{
    ComponentCreator creator;
    _map = creator.create_map("nts/4081.nts", this);
}

nts::C4081::~C4081()
{
}
