#include <iostream>

#include "Mechanic.h"

int main()
{
    const IVehicleVisitor* mechanic { new Mechanic()};

    const IVehicle* car1 { new Car("Beeeeeeep")};

    car1->Accept(*mechanic);
    
    std::cout << std::endl;

    const IVehicle* car2 { new Car("BEEEEEEEEEEEEEP")};

    car2->Accept(*mechanic);

    std::cout << std::endl;

    const IVehicle* motorbike {new Motorbike()};

    motorbike->Accept(*mechanic);
    
    return 0;
}
