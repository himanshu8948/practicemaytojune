#include<iostream>
#include<math.h>
using namespace std;

double circumference(double a ,char r){
    return M_PI*r*2;
}
double circumference(double a,double b){
    return 2*(a+b);
}
double circumference(double a,double b,double c){
    return (a+b+c);
}
double circumference(double side){
    return 4*side;
}

int main(){

    string shape;
    double a,b,c,result;

    cout<<"enter the name of the shape for which you wanted to calculate the circumference :";
    cin>>shape;

    if(shape == "circle" || shape == "CIRCLE"){
        
        cout<<"you have entered the shape of the circle ,please enter the radius of the circle to calculate its circumference:";
        cin>>a;

        result = circumference(a,'r');
        cout<<"your circumference of the circle : ";
        cout<<result;

    }
    else if(shape == "square" || shape == "SQAURE"){
        cout<<"you have entered the shape of the square now please enter its side's dimension to calculate the circumference of the square:";
        cin>>a;

        result = circumference(a);

        cout<<"this is the circumference of the square : ";
        cout<<result;

    }
    else if(shape == "rectangle" || shape == "RECTANGLE"){
        cout<<"you have entered the shape of the rectangle now please enter the lenght and breadth of the rectangle :"<<endl;
        cout<<"lenght";
        cin>>a;
        cout<<"breadth";
        cin>>b;

        result = circumference(a,b);
        cout<<"this is the circumference of the rectangle :";
        cout<<result;

    }
    else if(shape == "triangle" || shape == "TRIANGLE"){
        cout<<"you have selected the shape of the triangle now please enter each side's dimension :"<<endl;
        cout<<"first side :";
        cin>>a;
        cout<<"second side :";
        cin>>b;
        cout<<"third side :";
        cin>>c;

        result = circumference(a,b,c);
        cout<<"this is the circumference of the triangle :";
        cout<<result;


    }
    else {
        cout<<"you have put invalid input ,please recheck and fill from these only -- circle,rectangle,square,triangle :";
        
    }
    return 0;
}
