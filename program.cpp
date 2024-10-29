#include "Customer.h"

int main() {
    Customer customer("John Doe", "12345-6789012-3", "555-1234");
    Car car1("Model S", "Tesla", 79999);
    customer.buyCar(car1);
    car1.sell();
    
    customer.displayCars();
    return 0;
}
