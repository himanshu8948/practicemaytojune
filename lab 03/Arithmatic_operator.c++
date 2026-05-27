#include<iostream>
#include<math.h>
using namespace std;

int main(){
float a,b,result;
char operators;
cout<<"enter the input value to apply the operations:"<<endl;
cout<<"enter your first value:"<<endl;
cin>>a;
cout<<"enter the second value :"<<endl;
cin>>b;
cout<<"enter the operation which you want to apply: + , - , *,/,% -----"<<endl;
cin>>operators;
switch (operators){
  
  case '+':
   result = a+b;
   break;
  case '-':
   result = a-b;
   break;
  case '*':
   result = a*b;
   break;
  case '/':
   result = a/b;
   break;
  case '%':
   result = fmod(a,b);
   break;
}
cout<<"your result of the operation :   "<<result;
return 0;
}