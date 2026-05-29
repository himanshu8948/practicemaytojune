#include<iostream>
#include<math.h>
using namespace std;


float area(float r){

    return M_PI*pow(r,2);
}
int main(){

    float result,r;

    cout<<"enter the radius of the circle to calculate its area :";
    cin>>r;
    result = area(r);
    cout<<"this is the area of the circle :";
    cout<<result;

    return 0;
}