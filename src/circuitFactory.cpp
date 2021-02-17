/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/

#include "circuitFactory.hpp"
#include <algorithm>
#include <utility>

std::unique_ptr<nts::IComponent> nts::CircuitFactory::createComponent(
    const std::string &type
)
{
    for (auto i = _components_ptr_list.begin(); i != _components_ptr_list.end(); i++) {
        if (type == i->type)
            return i->func();
    }
}

nts::CircuitFactory::CircuitFactory()
{
    _components_ptr_list.push_back(fill_vector("4081", create4081));
}

nts::CircuitFactory::Components_ptr nts::CircuitFactory::fill_vector(
    std::string type, std::unique_ptr<IComponent> (*func)())
{
    Components_ptr comp;
    comp.type = std::move(type);
    comp.func = func;
    return comp;
}

std::unique_ptr<nts::IComponent> nts::CircuitFactory::create4081()
{
    return std::make_unique<C4081>();
}
