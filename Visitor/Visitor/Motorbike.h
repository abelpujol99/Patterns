#pragma once
#include <iostream>

#include "IVehicle.h"

class Motorbike : public IVehicle
{
public:

    ~Motorbike() override = default;

    void Accept(const IVehicleVisitor& visitor) const override;

    static void MirrorBreaksEvent();
    
};

inline void Motorbike::Accept(const IVehicleVisitor& visitor) const
{
    visitor.Visit(this);
}

inline void Motorbike::MirrorBreaksEvent()
{
    std::cout << "*CRACK*" << std::endl;
}

