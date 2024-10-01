#pragma once
#include "IVehicleVisitor.h"

class IVehicle
{
public:
    virtual ~IVehicle() = default;

    virtual void Accept(const IVehicleVisitor& visitor) const = 0;
    
};