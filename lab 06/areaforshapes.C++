#include<iostream>
#include<math.h>
using namespace std;

double area(double a,char r){    //circle area

    return M_PI*(pow(a,2));

}
double area(double side){          //square area
    return (pow(side,2));
}
double area(double a,double b){     //rectangle area 
    return a*b;                       
}
double area(double a,double b,double c){    //triangle area
   double s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));

}

int main (){
    double a,b,c,result;
    string shape;
    char r;
    
    cout<<"enter the name of the shape for which area is required -- : from circle,square,rectangle,triangle:";
    cin>>shape;

         if (shape == "circle" or shape == "CIRCLE"){
            cout<<"you have selected the shape circle ,please enter the radius of the circle : ";
            cin>>a;
            
            result = area(a,r);
            cout<<"area of your circle is :";
            cout<<result;}
        
        
        
        else if (shape == "square" or shape == "SQUARE"){
            cout<<"you have selected the square shape now please enter its one side's dimension :";
            cin>>a;

            result = area(a);
            cout<<"your area of the square : ";
            cout<<result;}

                   
        else if (shape == "triangle" or shape == "TRIANGLE"){
            cout<<"you have selected the shape of the triangle now please enter the three side's dimensions of the triangle for the heron's formula : "<<endl;
            cout<<"first side :";
            cin>>a;
            cout<<"second side :";
            cin>>b;
            cout<<"third side :";
            cin>>c;

            result = area(a,b,c);
            cout<<"this is the area of the triangle :";
            cout<<result;}
            

        else if (shape == "rectangle" or shape == "RECTANGLE"){
            cout<<"you have selected the shape of rectangle now please enter the lenght and breadth of the rectangle:"<<endl;
            cout<<"length"<<endl;
            cin>>a;
            cout<<"breadth";
            cin>>b;
            
            result = area(a,b);
            cout<<"this is the area of the rectangle :";
            cout<<result;
        }
                
        if  (shape!= "circle" && shape != "rectangle" && shape != "square" && shape != "triangle" && shape != "CIRCLE" && shape != "RECTANGLE" && shape != "TRIANGLE" && shape != "SQUARE"){
                    cout<<"invalid input just fill the name of the shape eg -- square ,rectangle , circle ,triangle";
                }

return 0;  }