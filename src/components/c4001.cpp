/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/
#include "include/components/c4001.hpp"

nts::C4001::C4001()
{
    ComponentCreator creator;
    _map = creator.create_map_chipset("nts/4001.nts", this);
}

nts::C4001::~C4001()
{
}

void nts::C4001::simulate(std::size_t tick)
{
}

nts::Tristate nts::C4001::compute(std::size_t pin)
{
    return nts::FALSE;
}

void nts::C4001::setLink(std::size_t pin, IComponent *other,
    std::size_t otherPin
)
{
    //this->_links.insert(std::make_pair(_map.getpin_N(pin), other->getMap()->getpin_N(otherPin)));
}

void nts::C4001::dump() const
{
}

void nts::C4001::setConnections(int pin1, int pin2, int outputPin)
{
    std::vector<Pin*> tmp;
    tmp.push_back(_map.getpin_N(pin1));
    tmp.push_back(_map.getpin_N(pin2));
    tmp.push_back(_map.getpin_N(outputPin));
    _links.push_back(tmp);
}
