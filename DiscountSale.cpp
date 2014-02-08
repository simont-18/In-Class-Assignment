#include "DiscountSale.h"

namespace SavitchSale {
    //constructor
    DiscountSale::DiscountSale():Sale() {
        setDiscount(0);
    }
    
    DiscountSale::DiscountSale(double _price,double _discount):Sale(_price) {
        setDiscount(_discount);
    }
    
    //destructor
    DiscountSale::~DiscountSale() {
        //blank
    }
    
    //public member function
    double DiscountSale::getDiscount() const {
        return discount;
    }
    
    void DiscountSale::setDiscount(double _discount) {
        //check _discount is in between 0-100 before assigning it to discount
        if(_discount >= 0 && _discount <= 100)
            discount = _discount;
        else
            discount = 0;
    }
    
    void DiscountSale::print() {
        cout << "Discount Sale total price: $" << bill() << endl;

    }
    
    //computing price after discount
    double DiscountSale::bill() const {
        return ((1 - discount/100) * getPrice( ));
    }
}