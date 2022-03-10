// Planet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

class Planet {
private:
    double radius;    
public: 
    double MutatorR();//set
    void AccesorR();// get
    double SurfaceArea();//disp
    double Volume();
};
class Sphere:Planet { //dervr
private:
    double mass;
private:
    double MutatoM();//set
    void AccesorM();//get
    double DensityM();//disp
    double AccelerationM();//disp
};
int main()
{
}

/*In this assignment you will be creating a base class and derived class to perform some basic calculations for planets.
For the base class, create a class for a sphere.  This class will store the radius of the sphere (private). 
It will need to have an accessor and mutator for the radius.  You class should also have a constructor and functions to calculate surface area and volume.
Your planet class will be derived from your sphere class. 
It should add mass as a private member (with mutator and accessor) along with a constructor and functions to calculate density and acceleration due to gravity at the surface. 
Functions for input and display are optional.
Using this class, write a program that will prompt the user for the radius and mass of a planet. 
Your program will display the surface area, density and acceleration due to gravity at the surface.*/