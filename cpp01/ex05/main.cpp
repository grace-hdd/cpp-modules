#include "Harl.hpp"
#include <iostream>

int main(void)
{
    Harl harl;

    std::cout << "--- Standard Complaints ---" << std::endl;
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");

    std::cout << "\n--- Edge Cases ---" << std::endl;
    harl.complain("INVALID_LEVEL");
    harl.complain("");

    return 0;
}