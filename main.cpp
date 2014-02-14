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
    Square<int> S1(0);
    Square<int> S2(-1);
    Square<int> S3(10);
    
    cout << "\nTesting float data type\n";
    Square<float> S4(0);
    Square<float> S5(-1.1);
    Square<float> S6(10.10);
    
    cout << "\nTesting char data type\n";
    Square<char> S7('a');
    
    return 0;
}

