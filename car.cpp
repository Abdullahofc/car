#include "Car.h"

Car::Car(const string &m, const string &mk, double p)
    : model(m), make(mk), price(p), buyDate(time(nullptr)), sellDate(0) {}

void Car::sell() {
    sellDate = time(nullptr);
}

void Car::setModel(const string &m) 
{
    model = m; 
}
string Car::getModel() const
{
    return model;
}

void Car::setMake(const string &mk) 
{ make = mk;
}
string Car::getMake() const
{
    return make;
}

void Car::setPrice(double p)
{
    price = p;
}
double Car::getPrice() const
{ 
    return price; 
}

void Car::display() const {
    cout << "Model: " << model << ", Make: " << make
         << ", Price: $" << price << ", Buy Date: "
         << put_time(localtime(&buyDate), "%Y-%m-%d %H:%M:%S")
         << (sellDate ? ", Sell Date: " + string(put_time(localtime(&sellDate), "%Y-%m-%d %H:%M:%S")) : "")
         << endl;
}
