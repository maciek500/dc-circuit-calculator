#pragma once
#include "ElementObwodu.hpp"
#include <stdexcept> 

class Rezystor : public ElementObwodu {
private:
    double rezystancja; 
public:
    
    Rezystor(double r);
    double pobierzRezystancje() const override;
};