#include<iostream>
using namespace std;

char c;
int main(){

cout<<"enter you character to check if it is vowel or consonent !";cin>>c;
if (c == 'a'
    or c =='A' 
    or c == 'e'
    or c == 'E' 
    or c == 'i'
    or c == 'I'
    or c == 'u'
    or c == 'U' 
    or c == 'o'
    or c == 'O' ){

cout<<"your input character is a vowel!";
}
else{
cout<<"your input character is a consonent!";
}
return 0;
}