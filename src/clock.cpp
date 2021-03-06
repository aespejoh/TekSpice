/*
** EPITECH PROJECT, 2021
** nanoTekSpice
** File description:
** Created by aespejo,
*/
#include "clock.hpp"

nts::Clock::Clock()
{
    _type = "clock";
    _map.addPin(Pin::I, UNDEFINED, this);
}

void nts::Clock::simulate(std::size_t tick)
{
}

nts::Tristate nts::Clock::compute(std::size_t pin)
{
    Pin* pin1 = _map.getpin_N(1);
    if (pin1->getState() == TRUE)
        pin1->setState(FALSE);
    else if (pin1->getState() == FALSE)
        pin1->setState(TRUE);
    return UNDEFINED;
}

void nts::Clock::setLink(std::size_t pin, nts::IComponent *other,
    std::size_t otherPin
)
{
}

void nts::Clock::dump()
{
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

void nts::Clock::setConnections(int pin1, int pin2, int outputPin)
{
}
