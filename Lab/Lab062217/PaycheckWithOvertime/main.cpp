/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 22, 2017, 1:20 PM
 * Purpose:  PayCheck with Overtime
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
    float payRate,//Pay Rate $'s/hr
          hrsWrkd,//Hours worked in hours
          strtPay,//Straight time pay in hours
          ovrTime,//Where overtime starts in hours
          ovrFact,//Overtime Factor
          ovrPay, //Over Time Pay
          totPay; //Total Pay
            
    
    //Initialize variables
    payRate=10.0f;
    hrsWrkd=50.0f;
    ovrTime=40.0f;//Full time = 40 hours
    ovrFact=1.5f;//Time and a half
    
    //Map inputs to outputs or process the data
    strtPay=hrsWrkd*payRate;//Straight Time
    ovrPay=(hrsWrkd>=ovrTime?(hrsWrkd-ovrTime)*payRate*(ovrFact-1):0);
    totPay=strtPay+ovrPay;
    
    //Output the transformed data
    cout<<"Straight time pay  = $"<<strtPay<<endl;
    cout<<"Over time pay      = $"<<ovrPay<<endl;
    cout<<"The total paycheck = $"<<totPay<<endl;
    
    //Exit stage right!
    return 0;
}

