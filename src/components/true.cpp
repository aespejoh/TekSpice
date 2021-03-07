/*
** EPITECH PROJECT, 2021
** nanoTekSpice
** File description:
** Created by aespejo,
*/
#include "true.hpp"

nts::True::True()
{
    _map.addPin(Pin::I, TRUE, this);
    this->setType("true");
}

nts::True::~True()
{
}

void nts::True::simulate(std::size_t tick)
{
}

nts::Tristate nts::True::compute(std::size_t pin)
{
    return nts::TRUE;
}

void nts::True::setLink(std::size_t pin, nts::IComponent *other,
    std::size_t otherPin
)
{
}

void nts::True::dump()
{
    std::cout << "OUTPUT:" << std::endl;
    std::cout << "\tname -> " << _name << std::endl;
    std::cout << "\tstate of the output -> True" << std::endl;
}

void nts::True::setConnections(int pin1, int pin2, int outputPin)
{
}
