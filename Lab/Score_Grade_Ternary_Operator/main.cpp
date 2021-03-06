/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 29, 2017, 11:10 AM
 * Purpose:  Branching study
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random function
#include <ctime>     //time function
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    char score,grade;
    
    //Initialize variables
    score=rand()%51+50;//[50,100]
    
    //Map inputs to outputs or process the data
    grade=score>=90?'A':
          score>=80?'B':
          score>=70?'C':
          score>=60?'D':'F';
    
    //Output the transformed data
    cout<<"A score of "<<static_cast<int>(score)
            <<" gives a grade of "<<grade<<endl;
    
    //Exit stage right!
    return 0;
}