#pragma once
#include <iostream>

#include "IVehicle.h"

class Car : public IVehicle
{
private:

    std::string _hornSound;
    
public:

    Car() = default;
    Car(std::string&& honkSound);
    
    ~Car() override = default;

    void Accept(const IVehicleVisitor& visitor) const override;

    void PressHorn() const;
    
};

inline Car::Car(std::string&& honkSound) :
    _hornSound(std::move(honkSound))
{}

inline void Car::Accept(const IVehicleVisitor& visitor) const
{
    visitor.Visit(this);
}

inline void Car::PressHorn() const
{
    std::cout << _hornSound << std::endl;
}
