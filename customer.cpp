#include "Customer.h"

Customer::Customer(const string &n, const string &cn, const string &pn)
    : name(n), cnic(cn), phoneNumber(pn) {}

void Customer::setCnic(const string &cn)
{
    cnic = cn;
}
string Customer::getCnic() const 
{ 
    return cnic; 
}

void Customer::setPhoneNumber(const string &pn)
{
    phoneNumber = pn; 
}
string Customer::getPhoneNumber() const
{
    return phoneNumber;
}

void Customer::buyCar(const Car &car)
{
    cars.push_back(car);
}

void Customer::displayCars() const 
{
    cout << "Cars owned by " << name << " (CNIC: " << cnic << ", Phone: " << phoneNumber << "):\n";
    for (const auto &car : cars) {
        car.display();
    }
}
﻿
