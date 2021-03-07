/*
** EPITECH PROJECT, 2021
** nanoTekSpice
** File description:
** Created by aespejo,
*/
#include "c4069.hpp"

nts::C4069::C4069()
{
    _map.addPin(Pin::I, UNDEFINED, this);
    _map.addPin(Pin::O, UNDEFINED, this);
    _map.addPin(Pin::I, UNDEFINED, this);
    _map.addPin(Pin::O, UNDEFINED, this);
    _map.addPin(Pin::I, UNDEFINED, this);
    _map.addPin(Pin::O, UNDEFINED, this);
    _map.addPin(Pin::I, UNDEFINED, this);
    _map.addPin(Pin::O, UNDEFINED, this);
    _map.addPin(Pin::I, UNDEFINED, this);
    _map.addPin(Pin::O, UNDEFINED, this);
    _map.addPin(Pin::I, UNDEFINED, this);
    _map.addPin(Pin::O, UNDEFINED, this);
    _map.addPin(Pin::I, UNDEFINED, this);
}

nts::C4069::~C4069()
{
}

void nts::C4069::simulate(std::size_t tick)
{
}

nts::Tristate nts::C4069::compute(std::size_t pin)
{
    return nts::FALSE;
}

void nts::C4069::setLink(std::size_t pin, nts::IComponent *other,
    std::size_t otherPin
)
{
}

void nts::C4069::setConnections(int pin1, int pin2, int outputPin)
{
}

void nts::C4069::dump()
{
    std::cout << "CIRCUIT 4069:" << std::endl;
    std::cout << "\tname -> " << _name << std::endl;
    std::cout << "\tPINS:" << std::endl;
    int size = getMap()->getPins()->size();
    nts::Pin *pin = getMap()->getpin_N(1);
    for (int i = 2; i <= size; i++) {
        std::cout << "\t\tpin number -> " << pin->getN() << std::endl;
        if (pin->getState() == nts::UNDEFINED)
            std::cout << "\t\tstate of the input -> Undefined" << std::endl;
        else if (pin->getState() == nts::TRUE)
            std::cout << "\t\tstate of the input -> True" << std::endl;
        else if (pin->getState() == nts::FALSE)
            std::cout << "\t\tstate of the input -> False" << std::endl;
        pin = getMap()->getpin_N(i);
    }
}
