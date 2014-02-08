#ifndef __In_Class_Assignment__DiscountSale__
#define __In_Class_Assignment__DiscountSale__

#include "Sale.h"

namespace SavitchSale {
    //sub-class level 1
    class DiscountSale:public Sale {
    public:
        //constructor
        DiscountSale();
        DiscountSale(double,double);
        //destructor
        virtual ~DiscountSale();
        //public member function
        double getDiscount() const;
        void setDiscount(double);
        //virtual function
        virtual void print();
        virtual double bill() const;
    private:
        double discount;
    };
}

#endif