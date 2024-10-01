#pragma once

class Motorbike;
class Car;

class IVehicleVisitor
{
public:
    virtual ~IVehicleVisitor() = default;

    virtual void Visit(const Car* car) const = 0;
    virtual void Visit(const Motorbike* car) const = 0;
    
};
