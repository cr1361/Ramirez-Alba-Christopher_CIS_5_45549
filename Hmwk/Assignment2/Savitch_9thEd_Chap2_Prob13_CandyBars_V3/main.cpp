/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 27, 2017, 10:50 AM
 * Purpose:  Candy Bar Calculator
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <fstream>   //Input - Output file stream Library
#include <cstdlib>   //Library with the Random Number Generator
#include <ctime>     //Library for time
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Setting the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    char sex,nCdyBar;
    unsigned short wt,age,ht,bmr;
    unsigned int cndyCal=230;//230 calories for a chocolate candy bar
    ofstream out;
    
    //Open the output file stream
    out.open("randOut.dat");

    //Randomly Generate the Data
    wt =rand()%221+80;//[80,300]
    age=rand()%55 +18;//[18,72]
    ht =rand()%25 +56;//[56,80]
    sex=rand()%2*7+70;//70 = char F, 77 = char M

    
    //Map inputs to outputs or process the data
    bmr=(sex=='F')?
        655 + 4.3*wt +  4.7*ht - 4.7*age:
         66 + 6.3*wt + 12.9*ht - 6.8*age;
    nCdyBar=bmr/cndyCal;
    
    //Output the transformed data
    cout<<"Given sex="<<sex<<" wt="<<wt<<"(lbs) ht="<<ht<<"(in) age="
        <<age<<"(yrs)"<<" BMR="<<bmr<<"(cals)"<<endl;
    cout<<"Your chocolate candy bar consumption per day = "<<
            static_cast<int>(nCdyBar)<<endl;
    out<<"Given sex="<<sex<<" wt="<<wt<<"(lbs) ht="<<ht<<"(in) age="
        <<age<<"(yrs)"<<" BMR="<<bmr<<"(cals)"<<endl;
    out<<"Your chocolate candy bar consumption per day = "<<
            static_cast<int>(nCdyBar)<<endl;
    
    //Exit stage right!
    out.close();
    return 0;
}

