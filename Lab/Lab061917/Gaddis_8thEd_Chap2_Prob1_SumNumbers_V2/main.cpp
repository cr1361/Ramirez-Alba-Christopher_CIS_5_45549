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
    short snum1,snum2;//1 Byte data type range [0,255]
    short ssum;      //1 Byte data type range [0,255]
    
    //Initialize variables
    snum1=50;
    snum2=100;

    //Map inputs to outputs or process the data
    ssum=snum1+snum2;
    
    //Output the transformed data
    cout<<"Result is in range for a short"<<endl;
    cout<<snum1<<"+"
        <<snum2<<"="
        <<ssum<<endl;
    
    //Initialize variables
    snum1=20000;
    snum2=30000;

    //Map inputs to outputs or process the data
    ssum=snum1+snum2;
    
    //Output the transformed data
    cout<<"Show what happens when result is out of range for a short"<<endl;
    cout<<snum1<<"+"
        <<snum2<<"="
        <<ssum<<endl;
    
    //Declare variables
    unsigned short usnum1,usnum2;//1 Byte data type range [0,2^16-1]
    unsigned short ussum;      //1 Byte data type range [0,2^16-1]
    
    //Initialize variables
    usnum1=30000;
    usnum2=40000;

    //Map inputs to outputs or process the data
    ussum=usnum1+usnum2;
    
    //Output the transformed data
    cout<<"Show what happens when result is out of range for a unsigned short"<<endl;
    cout<<usnum1<<"+"
        <<usnum2<<"="
        <<ussum<<endl;
    
    //Exit stage right!
    return 0;
}