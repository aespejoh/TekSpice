/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/
#ifndef BOOTSTRAP_ICOMPONENT_HPP
#define BOOTSTRAP_ICOMPONENT_HPP

#include <iostream>
#include <memory>
#include "Tristate.hpp"
#include "pinMap.hpp"
#include <map>

namespace nts {
    class IComponent {
        public:
            PinMap *getMap();
            ~IComponent() = default;
            virtual void simulate(std::size_t tick) = 0;
            virtual nts::Tristate compute(std::size_t pin) = 0;
            virtual void setLink(std::size_t pin, IComponent *other, std::size_t otherPin) = 0;
            virtual void dump() const = 0;
            virtual std::string getType() {return _type;};
            virtual void setType(const std::string &type) {_type = type;};
            virtual void setName(const std::string &name) {_name = name;};
            virtual void setConnections(int pin1, int pin2, int outputPin) = 0;
            const std::string &getName() const {return _name;}
            Tristate getValue() const;
            void setValue(Tristate value);
        protected:
            std::string _type;
            std::string _name;
            nts::Tristate _value;
            PinMap _map;
            std::vector<std::vector<Pin*>> _links;
    };
}


#endif //BOOTSTRAP_ICOMPONENT_HPP
