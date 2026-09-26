#include "Movie.h"

#include <iostream>
#include <fstream>
#include <vector>


using namespace std;

vector<Movie> readMovies(ifstream inputFile){

}

int main(){


    ifstream inputFile("input.txt");

    if(inputFile.is_open()){

    }else{
        cerr << "Unable to open input.txt";
    }
    inputFile.close();
    return 0;
}