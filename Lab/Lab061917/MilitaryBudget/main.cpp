/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 19, 2017, 12:32 PM
 * Purpose:  Calculate the Federal Military Budget
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float milBudg;//Military Budget
    float fedBudg;//Federal Budget
    float percMil;//Percentage Military Budget
    
    //Initialize variables
    milBudg=609.3E09f;//609.3 Billion Dollars - Google Internet Search
    fedBudg=3.8e12f;  //3.8   Trillion Dollars - Google Internet Search
    
    //Map inputs to outputs or process the data
    percMil=milBudg/fedBudg*100;//Percentage result
    
    //Output the transformed data
    cout<<"The Military Budget = $"<<milBudg<<endl;
    std::cout<<"The Federal Budget  = $"<<fedBudg<<std::endl;
    std::cout<<"The Military Percentage = "<<percMil<<"%"<<std::endl;
    
    //Exit stage right!
    return 0;
}