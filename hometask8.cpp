#include<iostream>
using namespace std;
main(){
int time,initial_velocity,acceleration;
cout<<"enter initial velocity(m/s)";
cin>>initial_velocity;
cout<<"enter acceleration(m/s^2)";
cin>>acceleration;
cout<<"enter time";
cin>>time;
int final_velocity;
final_velocity=(acceleration*time)+initial_velocity;
cout<<"final_velocity (m/s)"<<final_velocity;
}
