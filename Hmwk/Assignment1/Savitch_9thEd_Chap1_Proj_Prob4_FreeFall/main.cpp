/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 20, 2017, 12:25 PM
 * Purpose:  Homework Free Fall Problem
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>     //Math Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float GRAVITY=3.2714e1f;//32.174 ft/sec^2
const float  CNVFTM=3.281f;//3.281ft/meter

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float altFt,altM,time;//Altitude (ft) or (meters) and Time (secs)
    
    //Input data
    cout<<"This problem calculates the altitude ";
    cout<<"drop in free fall"<<endl;
    cout<<"Input the measured time in seconds ";
    cout<<"for the object to drop"<<endl;
    cin>>time;
    
    //Map inputs to outputs or process the data
    //altFt=1/2*GRAVITY*time*time; //Bad since 1/2 = 0
    altFt=GRAVITY*time*time/2;
    //altFt=GRAVITY/2*pow(time,2);     //Expensive Function Call
    //altFt=GRAVITY/2*exp(2*log(time));//Very Expensive Function Call
    altM=altFt/CNVFTM;
    
    //Output the transformed data
    cout<<"The distance dropped = "<<altFt<<"(ft)"<<endl;
    cout<<"The distance dropped = "<<altM<<"(m)"<<endl;
    
    //Exit stage right!
    return 0;
}

