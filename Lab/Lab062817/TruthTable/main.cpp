/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 28, 2017, 12:08 PM
 * Purpose:  Truth Table confirmation
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
    bool x,y;
    
    //Display the Truth Table Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y X^Y^X !(X&&Y) !X||!Y ";
    cout<<"!(X||Y) !X&&!Y"<<endl;
    
    //First row of table
    x=true;
    y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<" ";
    cout<<endl;
    
    //Second row of table
    x=true;
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<" ";
    cout<<endl;
    
    //Third row of table
    x=false;
    y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<endl;
    
    //Fourth row of table
    x=false;
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<endl;

    
    //Exit stage right!
    return 0;
}