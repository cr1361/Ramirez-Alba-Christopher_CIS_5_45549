/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 29, 2017, 12:52 PM
 * Purpose:  e(x) term by term
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float aprxEx,exactEx,x;
    
    //Initialize variables
    x=1;
    exactEx=exp(x);
    aprxEx=1;

    //Calculate the terms in the series
    for(float counter=1,term=1,tol=1e-6f;//Initialization - Start
              term>tol;                  //Test - Stop
              counter++){                //Update - Step
        term*=x/counter;
        aprxEx+=term;
    };
    
    //Output the terms in the table
    cout<<"Exact  e^x = "<<exactEx<<endl;
    cout<<"Approx e^x = "<<aprxEx<<endl;

    //Exit stage right!
    return 0;
}