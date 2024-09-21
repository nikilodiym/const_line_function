#include <iostream>
#include "Reservoir.h"
#include "ColorLibrary.h"
#include <Windows.h>

using namespace std;

int main() {
    Reservoir defaultReservoir;

    Reservoir lake("Lake", 100.0, 200.0, 50.0);

    Reservoir copiedLake = lake.copy();

    cout << fixed << "Volume of lake: " << lake.getVolume() << endl;
    cout << "Surface area of lake: " << lake.getSurfaceArea() << endl;

    int comparison = lake.compareSurfaceArea(copiedLake);
    if (comparison == 0) {
        cout << "The surface areas are equal." << endl;
    }
    else if (comparison < 0) {
        ColorLibrary::printInColor("The lake has a smaller surface area than the copied lake.", ColorLibrary::RED);
        cout << endl;
    }
    else {
        ColorLibrary::printInColor("The lake has a larger surface area than the copied lake.", ColorLibrary::GREEN);
        cout << endl;
    }

    system("pause");
    return 0;
}