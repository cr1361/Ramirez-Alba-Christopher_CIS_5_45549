/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 13, 2017, 11:00 AM
 * Purpose:  Approximate PI
 *           Infinite Series
 *           Playing Darts
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random Function Library
#include <ctime>     //Time Library
#include <cmath>     //Math Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const unsigned int MAXRND=(1<<31)-1;//2^31-1
const float PI=4*atan(1);

//Function Prototypes
float realRnd(float,float);

//Execution begins here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    float piDarts,piSrs=0;
    int nDarts=100000,inCircl=0;
 
    //Play Darts and record how many landed in circle
    for(int thrw=1;thrw<=nDarts;thrw++){
        float x=realRnd(-1,1);
        float y=realRnd(-1,1);
        if(x*x+y*y<=1)inCircl++;
    }
    
    //Calculate pi using darts
    piDarts=4.0f*inCircl/nDarts;//Remember ratio of Areas Circle to Square
    
    //Approximate pi utilizing the Leibniz series for PI/4
    char neg1=-1,sign=-1;
    for(int term=1,denom=1;term<=nDarts;term++,denom+=2){
        sign*=neg1;
        piSrs+=1.0f*sign/denom;
    }
    piSrs*=4;//Remember Pi/4 so have to multiply
    
    //Output the transformed data
    cout<<"The Exact Value of PI  = "<<PI<<endl;
    cout<<"The Dart Value of PI   = "<<piDarts<<endl;
    cout<<"The Series Value of PI = "<<piSrs<<endl;
    
    //Exit stage right!
    return 0;
}

float realRnd(float min,float max){
    float random=1.0f*rand()/MAXRND;//Value range [0,1]
    return random*(max-min)+min;
}