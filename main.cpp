#include <vector>
#include <iostream>
#include "HigherOrderFunctions.h"

using namespace std;

vector<double> map(MapFunction* f, const vector<double>& source);

//******************************************************************************


//Implement these functions

//Problem 1
vector<double> filter(FilterFunction* f, const vector<double>& source);

//Problem 2
double reduce(ReduceFunction* f, const vector<double>& source, double start);

//Problem 3
double integrate(double lowerBound, double upperBound, double interval, MapFunction* f);


//******************************************************************************

void printVector(const vector<double>& v);

int main() {
    
    //**************************************************************************
    
    //Add test cases for your functions in main
    
    //**************************************************************************
    
    //Initial setup
    vector<double> values {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    //Apply functors
    vector<double> v1 = map(new Square(), values);
    vector<double> v2 = map(new F1(), values);
    
    //See results
    printVector(values);
    cout << endl;
    printVector(v1);
    cout << endl;
    printVector(v2);
    cout << endl;
    
    return 0;
}

double integrate(double lowerBound, double upperBound, double interval, MapFunction* f) {
    //Remove stub code and implement integrate here
    return 0;
}

double reduce(ReduceFunction* f, const vector<double>& source, double start) {
    //Remove stub code and implement reduce here
    return 0;
}

vector<double> filter(FilterFunction* f, const vector<double>& source) {
    //Remove stub code and implement filter here
    vector<double> v;
    return v;
}

vector<double> map(MapFunction* f, const vector<double>& source) {
    vector<double> target;
    for(int i = 0; i < source.size(); ++i) {
        target.push_back(f->apply(source.at(i)));
    }
    return target;
}

void printVector(const vector<double>& v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v.at(i) << ' ';
    }
}
