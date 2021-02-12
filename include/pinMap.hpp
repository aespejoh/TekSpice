/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/
#ifndef BOOTSTRAP_PINMAP_HPP
#define BOOTSTRAP_PINMAP_HPP

#include <vector>
#include "pin.hpp"

namespace nts {
    class PinMap {
        public:
            PinMap();
            ~PinMap() = default;
            const std::vector<Pin> &getPins() const;
            void addPin(Pin::Type, Tristate, IComponent*);
            int getNPin() const;
        private:
            std::vector<Pin> _pins;
            int n_pin;
    };
}
#endif //BOOTSTRAP_PINMAP_HPP
