/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 27, 2017, 10:50 AM
 * Purpose:  Candy Bar Calculator
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
    char sex,nCdyBar;
    unsigned short wt,age,ht,bmr;
    unsigned int cndyCal=230;//230 calories for a chocolate candy bar

    //Input data
    cout<<"Calculate how many candy bars you can eat/day"<<endl;
    cout<<"Input your Weight(lbs), Height(in), and Age(yrs)"<<endl;
    cin>>wt>>ht>>age;
    cout<<"Input your sex M/F"<<endl;
    cin>>sex;
    
    //Map inputs to outputs or process the data
    bmr=(sex=='F')?
        655+4.3*wt+ 4.7*ht-4.7*age:
         66+6.3*wt+12.9*ht-6.8*age;
    nCdyBar=bmr/cndyCal;
    
    //Output the transformed data
    cout<<"Given sex="<<sex<<" wt="<<wt<<"(lbs) ht="<<ht<<"(in) age="
        <<age<<"(yrs)"<<" BMR="<<bmr<<"(cals)"<<endl;
    cout<<"Your chocolate candy bar consumption per day = "<<
            static_cast<int>(nCdyBar)<<endl;
    
    //Exit stage right!
    return 0;
}

