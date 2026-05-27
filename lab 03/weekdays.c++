#include<iostream>
using namespace std;

int main (){

int weekdays;
cout<<"enter the weekday no. to get its name :";
cin>>weekdays;
switch(weekdays){

case 1:
cout<<"monday";
break;
case 2:
cout<<"tuesday";
break;
case 3:
cout<<"wednesday";
break;
case 4:
cout<<"thursday";
break;
case 5:
cout<<"friday";
break;
case 6:
cout<<"saturday";
break;
case 7:
cout<<"sunday";
break;

}
return 0;
}