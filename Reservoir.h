#pragma once
#ifndef RESERVOIR_H
#define RESERVOIR_H

#include <string>

using namespace std;

class Reservoir {
private:
    string name;
    double width;
    double length;
    double maxDepth;

public:
    Reservoir();
    Reservoir(const string& name, double width, double length, double maxDepth);
    ~Reservoir();
    Reservoir(const Reservoir& other);
    double getVolume() const;
    double getSurfaceArea() const;
    bool isSameType(const Reservoir& other) const;
    int compareSurfaceArea(const Reservoir& other) const;
    Reservoir copy() const;

    string getName() const;
    void setName(const string& name);
    double getWidth() const;
    void setWidth(double width);
    double getLength() const;
    void setLength(double length);
    double getMaxDepth() const;
    void setMaxDepth(double maxDepth);
};

#endif
