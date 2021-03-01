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
    auto it = _command_list.find(type);
    return (this->*it->second)();
//    auto e = _components_ptr_list_str.begin();
//    for (auto i = _components_ptr_list.begin(); i != _components_ptr_list.end(); i++, e++)
//        if (type == *e)
//            return static_cast<std::unique_ptr<IComponent>>(i->get());
//    return nullptr;
}

nts::CircuitFactory::CircuitFactory()
{
    _command_list.insert(std::make_pair("input", &CircuitFactory::createInput));
    _command_list.insert(std::make_pair("output", &CircuitFactory::createOutput));
    _command_list.insert(std::make_pair("4081", &CircuitFactory::create4081));
    _command_list.insert(std::make_pair("4001", &CircuitFactory::create4001));
    _components_ptr_list_str.emplace_back("input");
    _components_ptr_list.push_back(createInput());
    _components_ptr_list_str.emplace_back("output");
    _components_ptr_list.push_back(createOutput());
    _components_ptr_list_str.emplace_back("4081");
    _components_ptr_list.push_back(create4081());
    _components_ptr_list_str.emplace_back("4001");
    _components_ptr_list.push_back(create4001());
}

std::unique_ptr<nts::IComponent> nts::CircuitFactory::create4081()
{
    return std::make_unique<C4081>();
}

std::unique_ptr<nts::IComponent> nts::CircuitFactory::create4001()
{
    return std::make_unique<C4001>();
}

std::unique_ptr<nts::IComponent> nts::CircuitFactory::createInput()
{
    return std::make_unique<Input>();
}

std::unique_ptr<nts::IComponent> nts::CircuitFactory::createOutput()
{
    return std::make_unique<Output>();
}
