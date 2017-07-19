/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 28, 2017, 1:45 PM
 * Purpose:  Show how to use Get-line and make comparisons
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
    char city1[SIZE];
    char city2[SIZE];
    char name[SIZE];
    
    //Input a city
    cout<<"Input the first city spaces allowed"<<endl;
    cin.getline(city1,SIZE);
    
    //Input another city
    cout<<"Input the second city, no spaces allowed"<<endl;
    cin>>city2;
    cin.ignore();
    
    //Input any number
    cout<<"Input your name, spaces allowed"<<endl;
    cin.getline(name,SIZE);
    
    //Output the user input
    cout<<"Your Name is "<<name<<endl;
    cout<<"City 1 = "<<city1<<endl;
    cout<<"City 2 = "<<city2<<endl;
    
    //Compare the month to January for a match
    if(!strcmp(city1,city2))cout<<"The cities match"<<endl;
    else cout<<"The cities don't match"<<endl;
    
    //Exit stage right!
    return 0;
}