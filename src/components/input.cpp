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
    _map.addPin(Pin::I, UNDEFINED, this);
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

void nts::Input::setLink(std::size_t pin, IComponent *other,
    std::size_t otherPin
)
{
}

void nts::Input::dump() {
    std::cout << "INPUT:" << std::endl;
    std::cout << "\tname -> " << _name << std::endl;
    std::cout << "\tstate of the input -> ";
    nts::Pin *pin = getMap()->getpin_N(1);
    if (pin->getState() == nts::UNDEFINED)
        std::cout << "Undefined" << std::endl << std::endl;
    else if (pin->getState() == nts::TRUE)
        std::cout << "True" << std::endl << std::endl;
    else if (pin->getState() == nts::FALSE)
        std::cout << "False" << std::endl << std::endl;
}

void nts::Input::setConnections(int pin1, int pin2, int outputPin)
{
}
