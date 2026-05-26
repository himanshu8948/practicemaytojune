#include<iostream>
using namespace std;

float a,b,c;

int main(){

cout<<"enter your first no. to check largest of three no. !";cin>>a;
cout<<"enter your second no. to check largest of three no. !";cin>>b;
cout<<"enter your third no. to check largest of three no. !";cin>>c;
if(a>b & a>c){

cout<< "a is largest no. from all three numbers!";
}
else if(b>a & b>c){

cout<<"b is largest no. from all three numbers!";
}
else if(c>a & c>b){

cout<<"c is largest no. from all three numbers!";
}
else{

cout<<"no number is greatest from three no.!";
}

return 0;
}