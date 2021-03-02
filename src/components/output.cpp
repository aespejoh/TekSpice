/*
** EPITECH PROJECT, 2021
** nanoTekSpice
** File description:
** Created by aespejo,
*/
#include "output.hpp"
#include "componentCreator.hpp"

nts::Output::Output()
{
    ComponentCreator creator;
    _map = creator.create_map_chipset("nts/output.nts");
    this->setType("output");
}

nts::Output::~Output()
{
}

void nts::Output::simulate(std::size_t tick)
{
}

nts::Tristate nts::Output::compute(std::size_t pin)
{
    return nts::FALSE;
}

void nts::Output::setLink(std::size_t pin, nts::IComponent &other,
    std::size_t otherPin
)
{
}

void nts::Output::dump() const
{
}
