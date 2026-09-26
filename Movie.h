#pragma once

#include <string>


using namespace std;

class Movie{
    public:
    
    void setScreenWriter(string writer);
    string getScreenWriter();

    void setYear(int Year);
    int getYear();
    
    void getTitle(string Title);
    string setTitle();

    void print();

    private:
    
    string screenWriter;
    int year;
    string title;
};