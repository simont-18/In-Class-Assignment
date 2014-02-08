#ifndef __In_Class_Assignment__ClearanceSale__
#define __In_Class_Assignment__ClearanceSale__

#include "DiscountSale.h"

namespace SavitchSale {
    //sub-class level 2
    class ClearanceSale:public DiscountSale {
    public:
        //constructor
        ClearanceSale();
        ClearanceSale(double,double,double);
        //destructor
        ~ClearanceSale();
        //public member function
        double getClearanceDiscount() const;
        void setClearanceDiscount(double);
        void print();
        double bill() const;
    private:
        double clearanceDiscount;
    };
}

#endif