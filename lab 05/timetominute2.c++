#include<iostream>
using namespace std;

float timetominute(float hour,float minutes,float seconds){

    return (hour*60)+(minutes)+(seconds/60);

}
int main(){

    float hour,minutes,seconds,time;

cout<<"enter the time in hours :";
cin>>hour;
cout<<"enter the time in minutes :";
cin>>minutes;
cout<<"enter the time in seconds :";
cin>>seconds;

if (hour >= 0 && minutes >= 0 && seconds >= 0 ){

    time = timetominute(hour,minutes,seconds);
    cout<<"this is time in minutes :";
    cout<<time << " "<< "minutes";
    }
    else {
        cout<<"invalid value ! just check it man what the hell are out here hha ?? :";

    }
return 0;}
