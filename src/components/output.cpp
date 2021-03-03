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
    _map = creator.create_map_chipset("nts/outputs.nts", this);
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

void nts::Output::setLink(std::size_t pin, IComponent *other,
    std::size_t otherPin
)
{
}

void nts::Output::dump() const
{
}

void nts::Output::setConnections(int pin1, int pin2, int outputPin)
{

}
