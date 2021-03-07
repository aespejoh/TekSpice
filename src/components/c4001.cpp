/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/
#include "include/components/c4001.hpp"
#include "logic.hpp"

nts::C4001::C4001()
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
    setConnections(12,13,11);
    setConnections(9,8,10);
}

nts::C4001::~C4001()
{
}

void nts::C4001::simulate(std::size_t tick)
{
}

nts::Tristate nts::C4001::compute(std::size_t pin)
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
        return Nor_gate(input1->getState(), input2->getState());
    }
    else
        return p->getState();
}

void nts::C4001::setLink(std::size_t pin, IComponent *other,
    std::size_t otherPin
)
{
    //this->_links.insert(std::make_pair(_map.getpin_N(pin), other->getMap()->getpin_N(otherPin)));
}

void nts::C4001::dump()
{
    std::cout << "CIRCUIT 4001:" << std::endl;
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

void nts::C4001::setConnections(int pin1, int pin2, int outputPin)
{
    std::vector<Pin*> tmp;
    tmp.push_back(_map.getpin_N(pin1));
    tmp.push_back(_map.getpin_N(pin2));
    tmp.push_back(_map.getpin_N(outputPin));
    _links.push_back(tmp);
}
