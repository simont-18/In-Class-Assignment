#include "Square.h"


namespace ICA3 {
    //constructor
    template <class T>
    Square<T>::Square() {
        setSide(1);
    }
    
    template <class T>
    Square<T>::Square(T s) {
        setSide(s);
    }
    
    //deconstructor
    template <class T>
    Square<T>::~Square() {
        //blank
    }
    
    //assign s to side if there is no exception caught
    //s can not be 0, negative, or char
    template <class T>
    void Square<T>::setSide(T s) {
        try {
            if(s == 0)
                throw SquareException("Side can not be 0!");
            if(s < 0)
                throw SquareException("error #1: side can not be negative!");
            if(isprint(s))
                throw SquareException("error #2: side can not be char!");
            side = s;
            cout << "Side have been successfully assigned.\n";
        } catch(exception& e) {
            cerr << e.what() << endl;
        } catch(...) {
            cerr << "Exception caught!\n";
        }
        
    }
    
    //return side
    template <class T>
    T Square<T>::getSide() const {
        return side;
    }
    
    //print side
    template <class T>
    void Square<T>::display() {
        cout << "This is a square with sides of length: " << side << endl;
    }
}