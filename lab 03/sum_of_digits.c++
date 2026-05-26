#include<iostream>
using namespace std;

int main(){

int a,sum;
sum = 0;
cout<<"input the value of which you want the sum of digits :";
cin>>a;

while(a != 0){

 sum = sum + a % 10;
 a = a/10;

}
cout<<"sum of digits of your inpur value : "<<sum;
return 0;
}