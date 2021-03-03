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
            std::vector<Pin> * getPins();
            void addPin(Pin::Type, Tristate, IComponent*);
            int get_number_pin() const;
            Pin* getpin_N(int n);
        private:
            std::vector<Pin> _pins;
            int n_pin;
    };
}
#endif //BOOTSTRAP_PINMAP_HPP
