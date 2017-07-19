/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 28, 2017, 1:45 PM
 * Purpose:  Show how to use Getline and make comparisons
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string.h>  //String library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare a character array
    const int SIZE=20;
    char month[SIZE];
    
    //Input the month
    cout<<"Input a month"<<endl;
    cin.getline(month,SIZE);
    
    //Output the user input
    cout<<"The month you choose was "<<month<<endl;
    
    //Compare the month to January for a match
    if(!strcmp(month,"January"))cout<<"It matches January"<<endl;
    else cout<<"It doesn't match January"<<endl;
    
    //Exit stage right!
    return 0;
}