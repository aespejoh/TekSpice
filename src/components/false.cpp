/*
** EPITECH PROJECT, 2021
** nanoTekSpice
** File description:
** Created by aespejo,
*/
#include "false.hpp"

nts::False::False()
{
    _map.addPin(Pin::I, FALSE, this);
    this->setType("true");

}

nts::False::~False()
{
}

void nts::False::simulate(std::size_t tick)
{
}

nts::Tristate nts::False::compute(std::size_t pin)
{
    return nts::FALSE;
}

void nts::False::setLink(std::size_t pin, nts::IComponent *other,
    std::size_t otherPin
)
{
}

void nts::False::dump()
{
    std::cout << "OUTPUT:" << std::endl;
    std::cout << "\tname -> " << _name << std::endl;
    std::cout << "\tstate of the output -> False" << std::endl;
}

void nts::False::setConnections(int pin1, int pin2, int outputPin)
{
}
