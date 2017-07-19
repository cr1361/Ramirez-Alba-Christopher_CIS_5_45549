/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 21, 2017, 1:25 PM
 * Purpose:  Land Calculations
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float CNVFTAC=43560.0f;//43560 feet/Acre
const float CNVFTM=5280.0f;  //5280 feet/Mile

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float inSqFt, inAcres;//Inputs Square Feet and Acres
    float nAcres, nSqMls; //Number of Acres and Square Miles
    
    //Input data
    cout<<"Input number of Sq feet, and Acres to convert"<<endl;
    cin>>inSqFt>>inAcres;
    
    //Map inputs to outputs or process the data
    nAcres=inSqFt/CNVFTAC;
    nSqMls=inAcres*CNVFTAC/CNVFTM/CNVFTM;
    
    //Output the transformed data
    cout<<inSqFt<<" Feet = "<<nAcres<<" Acres"<<endl;
    cout<<inAcres<<" Acres = "<<nSqMls<<" Miles"<<endl;
    
    //Exit stage right!
    return 0;
}

