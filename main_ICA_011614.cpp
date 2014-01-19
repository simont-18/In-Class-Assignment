#include <iostream>
#include "header_ICA_011614.h"
using namespace std;

int main() {
    Book a("Adventure",2010), b("Basketball",2011);
    
    cout << a.getName() << '-' << a.getYear() << endl;
    cout << b.getName() << '-' << b.getYear() << endl << endl;
    
    a.setName("Apple");
    a.setYear(2011);
    b.setName("Baseball");
    b.setYear(2012);
    
    cout << a.getName() << '-' << a.getYear() << endl;
    cout << b.getName() << '-' << b.getYear() << endl;
    
    return 0;
}