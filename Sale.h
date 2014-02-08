#ifndef __In_Class_Assignment__Sale__
#define __In_Class_Assignment__Sale__

#include <iostream>
using namespace std;

namespace SavitchSale {
    //base class
    class Sale {
    public:
        //constructor
        Sale();
        Sale(double);
        //destructor
        virtual ~Sale();
        //public member function
        double getPrice() const;
        void setPrice(double);
        //virtual fuction
        virtual void print();
        virtual double bill();
    private:
        double price;
    };
}

#endif
