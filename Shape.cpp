#include <iostream>
#include "Shape.h"

// using namespace std;
using std::cout;
using std::endl;

Shape::Shape(const string& otherName)
{
    name = otherName;
}

virtual Shape::~Shape()
{
}

void virtual Shape::print()
{
    cout << name << endl;
}
