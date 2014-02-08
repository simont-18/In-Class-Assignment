//Name: Kyle Johnston           contribute:33%               Kyle@KyleJohnston.net
//Name: Harshin Kanabar         contribute:33%               harshin.kanabar@gmail.com
//Name: Duy Ta                  contribute:33%               duy.ta1895@gmail.com

#include <iostream>
#include "ClearanceSale.h"

using namespace std;
using namespace SavitchSale;

int main() {
    //creating an array of Sale with size of 3
    Sale *s[3];
    
    //defining the Sale array
    s[0] = new Sale(10);                    //price = $10
    s[1] = new DiscountSale(10,10);         //price = $10, discount = 10%
    s[2] = new ClearanceSale(10,10,10);     //price = $10, discount = 10%, clearance discount = 10%
    
    //printing the Sale array
    for(int i = 0; i < 3; i++) {
        s[i]->print();
    }
    
    return 0;
}