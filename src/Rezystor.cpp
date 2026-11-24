#include "Rezystor.hpp"


Rezystor::Rezystor(double r) {
    if (r < 0) {
        throw std::invalid_argument("Rezystancja nie moze byc ujemna!");
    }
    rezystancja = r;
}

double Rezystor::pobierzRezystancje() const {
    return rezystancja;
}