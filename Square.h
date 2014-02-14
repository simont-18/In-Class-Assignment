#ifndef __In_Class_Assignment__Square__
#define __In_Class_Assignment__Square__

#include <iostream>
#include <String>
#include <ctype.h>
#include "SquareException.h"
using namespace std;

namespace ICA3{
    //Square is a template class
    template <class T>
    class Square {
    public:
        //constructor
        Square();
        Square(T s);
        //deconstructor
        ~Square();
        //member function
        void setSide(T s);
        T getSide() const;
        void display();
    private:
        //private member variable
        T side;
    };
}

#endif
