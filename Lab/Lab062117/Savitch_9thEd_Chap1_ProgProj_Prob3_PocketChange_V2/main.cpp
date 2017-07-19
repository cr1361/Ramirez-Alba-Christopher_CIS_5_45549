/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 21, 2016, 1:12 PM
 * Purpose:  How much Pocket Change 
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
    short nQts,nNckl,nDms;       //Number of Quarters, Nickels, Dimes [1-32000]
    short pcktChg;               //Number of cents in your pocket
    char vQts=25,vDms=10,vNckl=5;//Value of Quarter, Nickel, Dime
    
    //Input data
    cout<<"This program calculates your pocket change"<<endl;
    cout<<"Input the number of Quarters, Dimes and Nickels "<<endl;
    cout<<"Inputs are limited to 32000 coins a piece"<<endl;
    cin>>nQts>>nDms>>nNckl;
    
    //Process/Calculations Here
    pcktChg=nQts*vQts+nDms*vDms+nNckl*vNckl;
    
    //Output Located Here
    cout<<nQts<<" Quarters + ";
    cout<<nDms<<" Dimes + ";
    cout<<nNckl<<" Nickels = ";
    cout<<pcktChg<<" Cents or ";
    cout<<pcktChg/100.0f<<(pcktChg%10==0?'0':' ')<<"Dollars"<<endl;

    //Exit
    return 0;
}

