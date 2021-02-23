/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/

#include "circuitFactory.hpp"
#include <algorithm>

std::unique_ptr<nts::IComponent> nts::CircuitFactory::createComponent(
    const std::string &type
)
{
    auto e = _components_ptr_list_str.begin();
    for (auto i = _components_ptr_list.begin(); i != _components_ptr_list.end(); i++, e++)
        if (type == *e)
            return static_cast<std::unique_ptr<IComponent>>(i->get());
    return nullptr;
}

nts::CircuitFactory::CircuitFactory()
{
    _components_ptr_list_str.emplace_back("input");
    _components_ptr_list.push_back(createInput());
    _components_ptr_list_str.emplace_back("output");
    _components_ptr_list.push_back(createOutput());
    _components_ptr_list_str.emplace_back("4081");
    _components_ptr_list.push_back(create4081());
    _components_ptr_list_str.emplace_back("4001");
    _components_ptr_list.push_back(create4001());
}

std::unique_ptr<nts::IComponent> nts::CircuitFactory::create4081() const noexcept
{
    return std::make_unique<C4081>();
}

std::unique_ptr<nts::IComponent> nts::CircuitFactory::create4001() const noexcept
{
    return std::make_unique<C4001>();
}

std::unique_ptr<nts::IComponent> nts::CircuitFactory::createInput() const noexcept
{
    return std::make_unique<Input>();
}

std::unique_ptr<nts::IComponent> nts::CircuitFactory::createOutput() const noexcept
{
    return std::make_unique<Output>();
}
