/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 19, 2017, 1:22 PM
 * Purpose:  Sum of 2 Numbers
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
    unsigned char cnum1,cnum2;//1 Byte data type range [0,255]
    unsigned char csum;       //1 Byte data type range [0,255]
    
    //Initialize variables
    cnum1=50;
    cnum2=100;

    //Map inputs to outputs or process the data
    csum=cnum1+cnum2;
    
    //Output the transformed data
    cout<<"Result is in range for a char but iostream/cout prints ascii code"<<endl;
    cout<<cnum1<<"+"
        <<cnum2<<"="
        <<csum<<endl;
    cout<<"Cast char to integer"<<endl;
    cout<<static_cast<int>(cnum1)<<"+"
        <<static_cast<int>(cnum2)<<"="
        <<static_cast<int>(csum)<<endl;
    

    //Exit stage right!
    return 0;
}