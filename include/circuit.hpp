/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/
#ifndef BOOTSTRAP_CIRCUIT_HPP
#define BOOTSTRAP_CIRCUIT_HPP

#include "IComponent.hpp"
#include <vector>
#include "c4081.hpp"

namespace nts {
    class Circuit : public IComponent {
        public:
        ~Circuit();
        void simulate(std::size_t tick) override;
            Tristate compute(std::size_t pin) override;
            void setLink(std::size_t pin, IComponent &other, std::size_t otherPin) override;
            void dump() const override;
            std::unique_ptr<nts::IComponent> createComponent(const std::string &type);
        private:
            std::vector<IComponent> _circuit;
            std::unique_ptr<nts::IComponent> create4081() const noexcept;
    };
}
#endif //BOOTSTRAP_CIRCUIT_HPP
