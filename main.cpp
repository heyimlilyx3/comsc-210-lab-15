#include "Movie.h"

#include <iostream>
#include <fstream>
#include <vector>


using namespace std;

vector<Movie> readMovies(ifstream& inputFile){
    string line;
    vector<Movie> outputMovies;

    while(getline(inputFile, line)){
        Movie tempMovie;                // create a movie object
        tempMovie.setTitle(line);       // sets title of movie object
        
        getline(inputFile, line);       // moves to next line
        tempMovie.setYear(stoi(line));  // passes the next line as an int into year

        getline(inputFile, line);       // moves to next line
        tempMovie.setScreenWriter(line);// passes this line into screenWriter

        outputMovies.push_back(tempMovie);

    }

    return outputMovies;
}

int main(){


    ifstream inputFile("input.txt");
    vector<Movie> movies;

    if(inputFile.is_open()){
        movies = readMovies(inputFile);
    }else{
        cerr << "Unable to open input.txt";
    }
    inputFile.close();

    //print movies
    for(Movie output : movies){
        output.print();
        cout << endl;
    }
    return 0;
}