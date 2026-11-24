#include <iostream>
#include "Rezystor.hpp"

int main() {
    std::cout << "Kalkulator obwodow pradu stalego" << std::endl;

    try {
        Rezystor r1(100.0);
        std::cout << "Rezystor R1 ma rezystancje: " << r1.pobierzRezystancje() << " Ohm" << std::endl;
        Rezystor r_blad(-50.0); 

    } catch (const std::exception& e) {
        std::cerr << "Blad: " << e.what() << std::endl;
    }

    return 0;
}