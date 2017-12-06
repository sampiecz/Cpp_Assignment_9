//*********************************************************************
//// FILE:        Cone.cpp 
//// AUTHOR:      Samuel Piecz
//// LOGON ID:    Z1732715
//// DUE DATE:    12/05/17
////
//// PURPOSE:     Store logic for the Cone Class. 
////********************************************************************
#include <cmath>
#include <ctgmath>
#include <iostream>
#include <string>
#include "Cone.h"

using std::sqrt;
using std::cout;
using std::endl;
using std::string;

Cone::Cone(const string& name, int radius, int height) : Circle(name, radius)
{
    this->height = height;
}

double Cone::getArea() const 
{
    double area = 3.14*((Circle::getRadius())(Circle::getRadius()+sqrt((height*height)+(Circle::getRadius()*Circle::getRadius()))));
    return area;
}

double Cone::getVolume() const 
{
    double volume = 3.14*(Circle::getRadius()*Circle::getRadius())(height/3); 
    return volume;
}

void Cone::print() const 
{
    Circle::print(); 
    cout << ", " << height << ", " << getVolume() << endl;
}
