/*
** EPITECH PROJECT, 2021
** nanoTekSpice
** File description:
** Created by aespejo,
*/
#include "c4071.hpp"
#include "logic.hpp"

nts::C4071::C4071()
{
    _map.addPin(Pin::I, UNDEFINED, this); //1
    _map.addPin(Pin::I, UNDEFINED, this); //2
    _map.addPin(Pin::O, UNDEFINED, this); //3
    _map.addPin(Pin::O, UNDEFINED, this); //4
    _map.addPin(Pin::I, UNDEFINED, this); //5
    _map.addPin(Pin::I, UNDEFINED, this); //6
    _map.addPin(Pin::I, UNDEFINED, this); //7
    _map.addPin(Pin::I, UNDEFINED, this); //8
    _map.addPin(Pin::I, UNDEFINED, this); //9
    _map.addPin(Pin::O, UNDEFINED, this); //10
    _map.addPin(Pin::O, UNDEFINED, this); //11
    _map.addPin(Pin::I, UNDEFINED, this); //12
    _map.addPin(Pin::I, UNDEFINED, this); //13
    setConnections(1,2,3);
    setConnections(5,6,4);
    setConnections(13,12,11);
    setConnections(9,8,10);
}

nts::C4071::~C4071()
{
}

void nts::C4071::simulate(std::size_t tick)
{
}

nts::Tristate nts::C4071::compute(std::size_t pin)
{
    Pin *p = _map.getpin_N(pin);
    Pin *input1;
    Pin *input2;
    if (p->getType() == nts::Pin::Type::O) {
        for (auto &elem : _links) {
            for (auto &tmp : elem) {
                if (tmp->getN() == p->getN()) {
                    input1 = elem[0];
                    input2 = elem[1];
                }
            }
        }
        return or_gate(input1->getState(), input2->getState());
    }
    else
        return p->getState();
}

void nts::C4071::setLink(std::size_t pin, nts::IComponent *other,
    std::size_t otherPin
)
{
}

void nts::C4071::setConnections(int pin1, int pin2, int outputPin)
{
    std::vector<Pin*> tmp;
    tmp.push_back(_map.getpin_N(pin1));
    tmp.push_back(_map.getpin_N(pin2));
    tmp.push_back(_map.getpin_N(outputPin));
    _links.push_back(tmp);
}

void nts::C4071::dump() const
{
    std::cout << "CIRCUIT 4071:" << std::endl;
    std::cout << "\tname -> " << _name << std::endl << std::endl;
}