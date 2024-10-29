#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#ifndef CAR_H
#define CAR_H

using namespace std;

class Car {
private:
    string model;
    string make;
    double price;
    time_t buyDate;
    time_t sellDate;

public:
    Car(const string &m, const string &mk, double p);

    void sell();
    
    void setModel(const string &m);

    string getModel() const;
    
    void setMake(const string &mk);

    string getMake() const;
    
    void setPrice(double p);

    double getPrice() const;

    void display() const;
};

#endif 
﻿
