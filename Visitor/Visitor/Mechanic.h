#pragma once
#include <iostream>

#include "IVehicleVisitor.h"
#include "Car.h"
#include "Motorbike.h"

class Mechanic : public IVehicleVisitor
{
public:
    
    void Visit(const Car* car) const override;
    void Visit(const Motorbike* motorbike) const override;
};

inline void Mechanic::Visit(const Car* car) const
{
    std::cout << "Mechanic: \"Let's check this horn\"" << std::endl;

    car->PressHorn();
}

inline void Mechanic::Visit(const Motorbike* motorbike) const
{
    std::cout << "Mechanic: \"Let's check those rearview mirrors\"" << std::endl;

    motorbike->MirrorBreaksEvent();

    std::cout << "Mechanic: \"Ups...\"" << std::endl;
}
