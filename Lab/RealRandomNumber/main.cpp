/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 13, 2017, 10:17 AM
 * Purpose:  Real Random Number vs. Integer Random Number
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random Function Library
#include <ctime>     //Time Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const unsigned int MAXRND=(1<<31)-1;//2^31-1

//Function Prototypes
float realRnd(float,float);

//Execution begins here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    unsigned int maxRand;
    int minRand;
    unsigned int numRand;
    
    //Initialize variables
    maxRand=minRand=rand();
    numRand=2147483647;
    
    //Map inputs to outputs or process the data
    for(unsigned int i=1;i<=numRand;i++){
        int random=rand();
        if(random>maxRand)maxRand=random;
        if(random<minRand)minRand=random;
    }
    
    //Output the transformed data
    cout<<"The total random number called for = "<<numRand<<endl;
    cout<<"The minimum random number found was = "<<minRand<<endl;
    cout<<"The maximum random number found was = "<<maxRand<<endl;
    cout<<"2^31-1                              = "<<MAXRND<<endl;
    
    //Test out the function
    float minRnd,maxRnd,beg,end;
    
    //Initialize the values
    beg=5;
    end=14;
    minRnd=maxRnd=realRnd(beg,end);
    
    //Loop on the real random number generator
    for(unsigned int i=1;i<=numRand;i++){
        float random=realRnd(beg,end);
        if(random>maxRnd)maxRnd=random;
        if(random<minRnd)minRnd=random;
    }
    
    //Display the results
    cout<<endl;
    cout<<"The total random number called for = "<<numRand<<endl;
    cout<<"The minimum random number found was = "<<minRnd<<endl;
    cout<<"The maximum random number found was = "<<maxRnd<<endl;
      
    //Exit stage right!
    return 0;
}

float realRnd(float min,float max){
    float random=1.0f*rand()/MAXRND;//Value range [0,1]
    return random*(max-min)+min;
}