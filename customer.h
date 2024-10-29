#include <iostream>
#include <string>
#include <vector>
#include "Car.h"  

#ifndef CUSTOMER_H
#define CUSTOMER_H

using namespace std;

class Customer {
private:
    string name;
    string cnic;
    string phoneNumber;
    vector<Car> cars;

public:
    Customer(const string &n, const string &cn, const string &pn);
    
    void setCnic(const string &cn);

    string getCnic() const;

    void setPhoneNumber(const string &pn);

    string getPhoneNumber() const;

    void buyCar(const Car &car);

    void displayCars() const;
};

#endif 
