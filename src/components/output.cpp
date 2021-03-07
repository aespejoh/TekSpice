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
    _map.addPin(Pin::O, UNDEFINED, this);
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
    std::cout << "OUTPUT:" << std::endl;
    std::cout << "\tname -> " << _name << std::endl;
    std::cout << "\tstate of the output -> ";
    if (_value == nts::UNDEFINED)
        std::cout << "Undefined" << std::endl << std::endl;
    else if (_value == nts::TRUE)
        std::cout << "True" << std::endl << std::endl;
    else
        std::cout << "False" << std::endl << std::endl;
}

void nts::Output::setConnections(int pin1, int pin2, int outputPin)
{

}
