#include "Reservoir.h"

Reservoir::Reservoir() : name(""), width(0.0), length(0.0), maxDepth(0.0) {}

Reservoir::Reservoir(const std::string& name, double width, double length, double maxDepth)
    : name(name), width(width), length(length), maxDepth(maxDepth) {}

Reservoir::~Reservoir() {}

Reservoir::Reservoir(const Reservoir& other)
    : name(other.name), width(other.width), length(other.length), maxDepth(other.maxDepth) {}

double Reservoir::getVolume() const {
    return width * length * maxDepth;
}

double Reservoir::getSurfaceArea() const {
    return width * length;
}

bool Reservoir::isSameType(const Reservoir& other) const {
    return name == other.name;
}

int Reservoir::compareSurfaceArea(const Reservoir& other) const {
    double surfaceArea = getSurfaceArea();
    double otherSurfaceArea = other.getSurfaceArea();

    if (surfaceArea < otherSurfaceArea) {
        return -1;
    }
    else if (surfaceArea > otherSurfaceArea) {
        return 1;
    }
    else {
        return 0;
    }
}

Reservoir Reservoir::copy() const {
    return Reservoir(name, width, length, maxDepth);
}

std::string Reservoir::getName() const {
    return name;
}

void Reservoir::setName(const std::string& name) {
    this->name = name;
}

double Reservoir::getWidth() const {
    return width;
}

void Reservoir::setWidth(double width) {
    this->width = width;
}

double Reservoir::getLength() const {
    return length;
}

void Reservoir::setLength(double length) {
    this->length = length;
}

double Reservoir::getMaxDepth() const {
    return maxDepth;
}

void Reservoir::setMaxDepth(double maxDepth) {
    this->maxDepth = maxDepth;
}
