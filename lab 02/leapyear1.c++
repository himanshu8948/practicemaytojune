#include<iostream>
using namespace std;

int main(){

int year;
cout << "inpit value of year to check is it a leap year or not :";
cin>>year;

if(year % 4 == 0){
   
    if (year % 100 == 0){

        if(year % 400 == 0){

            cout<<"your entered value of year is a leap year !";

        }

        else{
            
            cout<<"your entered value of year isnot a leap year !";
        }
    }

    else{
        
         cout<<"your entered value of year is a leap year";
        } 
    }
 else {

            cout<<"your entered value of year is not a leap year!";
        }
    return 0;}

