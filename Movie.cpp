#include <iostream>
#include "Movie.h"

using namespace std;

void Movie::setScreenWriter(string writer){
    screenWriter = writer;
}
string Movie::getScreenWriter(){
    return screenWriter;
}

void Movie::setYear(int Year){
    year = Year;
}
int Movie::getYear(){
    return year;
}

void Movie::setTitle(string Title){
    title = Title;
}
string Movie::getTitle(){
    return title;
}

void Movie::print(){
    cout << "\tMovie: " << title << endl;
    cout << "\t\tYear Released: " << year << endl;
    cout << "\t\tScreen Writer: " << screenWriter << endl;
}