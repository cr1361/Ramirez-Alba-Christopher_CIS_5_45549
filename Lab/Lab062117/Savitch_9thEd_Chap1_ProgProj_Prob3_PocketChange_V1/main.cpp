/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 21, 2016, 12:50 PM
 * Purpose: How much Pocket Change V1
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare and Initialize all Variables Here
    char nQts,nNckl,nDms;        //Number of Quarters, Nickels, Dimes [1-9]
    short pcktChg;               //Number of cents in your pocket
    char vQts=25,vDms=10,vNckl=5;//Value of Quarter, Nickel, Dime
    
    //Input data
    cout<<"This program calculates your pocket change"<<endl;
    cout<<"Input the number of Quarters, Dimes and Nickels "<<endl;
    cout<<"Inputs are limited to 9 coins a piece"<<endl;
    cin>>nQts>>nDms>>nNckl;
    
    //Process/Calculations Here
    //Remember nQts, nDms, nNckl are characters not integers
    pcktChg=(nQts-48)*vQts+(nDms-48)*vDms+(nNckl-48)*vNckl;
    
    //Output Located Here
    cout<<nQts<<" Quarters + ";
    cout<<nDms<<" Dimes + ";
    cout<<nNckl<<" Nickels = ";
    cout<<pcktChg<<" Cents"<<endl;

    //Exit
    return 0;
}

