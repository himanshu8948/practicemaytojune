#include<iostream>
using namespace std;

float b,h,area;
int main(){


cout<<"input your base of the right angle triangle :";cin>>b;
cout<<"input your height of the right angle triangle :";cin>>h;
if(h>0 && b>0){

if(h>b){

area = 0.5*b*h;
cout<<"your area of the right angle triangle:"<<area;}
else{
    cout<<"put the value of base and height accurately sir ";
}
}
else{
cout<<"please enter positive value of base and height and also ignore the zero value sir ";
}
return 0;
}
