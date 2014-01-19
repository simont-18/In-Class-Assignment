#include "header_ICA_011614.h"

Book::Book() {
    setName("Book");
    setYear(2000);
}

Book::Book(string n, int y) {
    setName(n);
    setYear(y);
}

Book::~Book() {
    
}

int Book::getYear() {
    return year;
}

string Book::getName() {
    return name;
}

void Book::setYear(int y) {
    if(y < 2000)
        year = 2000;
    else
        year = y;
}

void Book::setName(string n) {
    name = n;
}

void Book::print() {
    cout << "Book name: " << name << endl;
    cout << "Year: " << year << endl;
}