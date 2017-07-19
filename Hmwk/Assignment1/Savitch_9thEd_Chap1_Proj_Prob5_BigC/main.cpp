/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 20, 2017, 1:05 PM
 * Purpose:  Big Characters
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
    char c;
    
    //Initialize by input from command line
    cout<<"What character would you like to use ";
    cout<<"to make a Big Letter C"<<endl;
    cin>>c;

    //Output the transformed data
    cout<<endl;
    cout<<"  "<<c<<c<<c<<endl;
    cout<<" "<<c<<"   "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<"   "<<c<<endl;
    cout<<"  "<<c<<c<<c<<endl;
    
    //Exit stage right!
    return 0;
}

