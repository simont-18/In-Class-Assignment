#include "ClearanceSale.h"

namespace SavitchSale {
    //constructor
    ClearanceSale::ClearanceSale():DiscountSale(){
        setClearanceDiscount(0);
    }
    
    ClearanceSale::ClearanceSale(double _price,double _discount,double _clearanceDiscount):DiscountSale(_price,_discount) {
        setClearanceDiscount(_clearanceDiscount);
    }
    
    //desctructor
    ClearanceSale::~ClearanceSale() {
        //blank
    }
    
    //public member function
    double ClearanceSale::getClearanceDiscount() const {
        return clearanceDiscount;
    }
    
    void ClearanceSale::setClearanceDiscount(double _clearanceDiscount) {
        //check _percent is in between 0-100 before assigning it to percent
        if(_clearanceDiscount >= 0 && _clearanceDiscount <= 100)
            clearanceDiscount = _clearanceDiscount;
        else
            clearanceDiscount = 0;
    }
    
    void ClearanceSale::print() {
        cout << "Clearance sale total price: $" << bill() << endl;

    }
    
    //compute final price with stacking discount
    double ClearanceSale::bill() const {
        return ((1 - clearanceDiscount/100) * DiscountSale::bill( ));
    }
}