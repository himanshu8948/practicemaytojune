//area of a scalene triangle by heron's formula 

#include<iostream>
#include<math.h>
using namespace std;

float a,b,c,S,area;
int main(){
cout<<"input your first no. : ";cin>>a;
cout<<"input your second no. :";cin>>b;
cout<<"input your third no. :";cin>>c;

if(a>0 && b>0 && c>0){

if(a<b+c && b<a+c && c<a+b){

S = (a+b+c)/2;
area = sqrt(S*(S-a)*(S-b)*(S-c));
cout<<"area of the scalene triangle :"<<area<<endl;}
else{
cout<<"your lenghts of the scalene triangle are not valid"<<endl;} 
return 0;
}

else{cout<<"lenghts cannot be negative or zero";}
return 0;
}