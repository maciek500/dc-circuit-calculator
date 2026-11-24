#pragma once

class ElementObwodu {
public:
    virtual ~ElementObwodu() = default;
    virtual double pobierzRezystancje() const = 0;
};