#include<iostream>
using namespace std;

float temp;
char unit ;

int main(){

cout<<"input your temperature sir with the unit either C or F to convert them into Celsius or Fahrenheit:";cin>>temp>>unit;

if(unit == 'C' || unit == 'c' ){

temp = (temp*9/5)+32;
cout <<"your temperature in Fahrenheit is : "<<temp;
}
else if (unit == 'F' || unit == 'f'){

temp = (temp-32)*5/9;
cout<<"your temperature converted to celsius:"<<temp;
}
else{
cout<<"please input the value of temperature with unit either F or C :thankyou:";}

}
