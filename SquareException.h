#ifndef __In_Class_Assignment__SquareException__
#define __In_Class_Assignment__SquareException__

#include <iostream>
#include <string>
using namespace std;

namespace ICA3 {
    //exception class to display custom messages
    class SquareException: public exception {
    public:
        //constructor
        SquareException(const string& _message);
        //what function to display message
        virtual const char* what() const throw() {
            return message.c_str();
        }
    private:
        string message;
    };
}
#endif