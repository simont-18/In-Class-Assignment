//Name: Kyle Johnston           contribute:33%               Kyle@KyleJohnston.net
//Name: Harshin Kanabar         contribute:33%               harshin.kanabar@gmail.com
//Name: Duy Ta                  contribute:33%               duy.ta1895@gmail.com

#include <iostream>
#include "Square.h"
#include "Square.cpp"

using namespace std;
using namespace ICA3;

//driver program to test all exception cases
int main() {
    cout << "Testing int data type\n";
    Square<int> One(0);
    Square<int> Two(-1);
    Square<int> Three(10);
    
    cout << "\nTesting float data type\n";
    Square<float> Four(0);
    Square<float> Five(-1.1);
    Square<float> Six(10.10);
    
    cout << "\nTesting char data type\n";
    Square<char> Seven('a');
    
    return 0;
}

