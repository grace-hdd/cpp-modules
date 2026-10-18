#include "Harl.hpp"

Harl::Harl(void) {}
Harl::~Harl(void) {}

void Harl::debug(void) {
    std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n\n";
}

void Harl::info(void) {
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n\n";
}

void Harl::warning(void) {
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here just last month.\n\n";
}

void Harl::error(void) {
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n\n";
}

void Harl::filter(std::string level) {
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int index = -1;

    for (int i = 0; i < 4; i++) {
        if (level == levels[i]) {
            index = i;
            break;
        }
    }

    switch (index) {
        case 0:
            this->debug();
            // fallthrough
        case 1:
            this->info();
            // fallthrough
        case 2:
            this->warning();
            // fallthrough
        case 3:
            this->error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
    }
}