/*
** EPITECH PROJECT, 2021
** nanoTekSpice
** File description:
** Created by aespejo,
*/
#include "input.hpp"
#include "componentCreator.hpp"

nts::Input::Input()
{
    ComponentCreator creator;
    _map = creator.create_map_chipset("nts/input.nts", this);
    this->setType("input");
}

nts::Input::~Input() {}

void nts::Input::simulate(std::size_t tick)
{
}

nts::Tristate nts::Input::compute(std::size_t pin)
{
    return nts::FALSE;
}

void nts::Input::setLink(std::size_t pin, nts::IComponent &other,
    std::size_t otherPin
)
{
}

void nts::Input::dump() const
{
}
