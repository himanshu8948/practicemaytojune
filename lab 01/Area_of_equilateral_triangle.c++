#include<iostream>
#include<math.h>
using namespace std;

float a ,area;

int main(){

cout<<"input the value for the side of the equilateral triangle in cm :";cin>>a;
if(a>0){

area = 1.0/2*a*a/2*sqrt(3);
cout <<"area of your equilateral triangle is :"<<area<<"cm^2";
}
else{
cout<<"the value you put is either negative or positive so please put a proper value for the calculation of the area:";}
return 0;
}

