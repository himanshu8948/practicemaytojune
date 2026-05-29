#include<iostream>
using namespace std;

int main(){

     float sum,fact;
    sum = 0; 
    fact = 1;

for (float i = 1; i<= 7 ; i++){

    fact = fact*i;
    sum += i/fact;

}
 cout<<"this your sum of series for seven term:";
 cout<<sum;

return 0;}