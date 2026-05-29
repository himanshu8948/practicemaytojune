#include<iostream>
using namespace std;

void timetominute(float &a,char &b){
    if (b == 'h' or b == 'H'){
        a = a*60;
    }
    else if(b == 'm' or b == 'M'){
      a = a;
    }
    else {
        a = a/60;
    }
}
 int main(){
    float a;
    char b;
    cout<<"enter your time to convert it into minutes :";
    cin>>a>>b;

    timetominute(a,b);

    cout<<"your time converted into minutes :";
    cout<<a<<"m";

    return 0;
 }