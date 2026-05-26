#include<iostream>
using namespace std;

int a;
int main(){
    cout<<"enter the value of your leap year!";cin>>a;
    if ( a % 4 == 0 && a % 100 == 0)
    { 
       if (a % 400 == 0){

    cout<<"your value of year input is a leap year!";
        }
    else {

    cout<<"the entered value of year isnot a leap year!";
    }
}
    else if(a % 4 == 0){
    cout<<"your entered value of year is a leap year !";
   }
   else{
    cout<<"your entered value is a not a leap year!";
   }

return 0;    }

