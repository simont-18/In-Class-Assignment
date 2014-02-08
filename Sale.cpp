#include "Sale.h"

namespace SavitchSale {
    //constructor
    Sale::Sale() {
        setPrice(0);
    }
    
    Sale::Sale(double _price) {
        setPrice(_price);
    }
    
    //desctructor
    Sale::~Sale() {
        //blank
    }
    
    //public member function
    double Sale::getPrice() const {
        return price;
    }
    
    void Sale::setPrice(double _price) {
        //check _price is greater than 0 before assigning it to price
        if(_price >= 0)
            price = _price;
        else
            price = 0;
    }

    void Sale::print() {
        cout << "Sale total price: $" << getPrice() << endl;
    }
    
    //virtual funtion bill
    double Sale::bill() {
        return 0;
    }
}
