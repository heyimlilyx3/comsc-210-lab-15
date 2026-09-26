#include <iostream>
#include "Movie.h"

using namespace std;

void Movie::setScreenWriter(string writer){
    screenWriter = writer;
}
string Movie::getScreenWriter(){
    return screenWriter;
}