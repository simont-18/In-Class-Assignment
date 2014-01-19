#ifndef __Lecture__Book__
#define __Lecture__Book__

#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    Book();
    Book(string,int=2000);
    ~Book();
    int getYear();
    string getName();
    void setYear(int);
    void setName(string);
    void print();
private:
    int year;
    string name;
};

#endif
