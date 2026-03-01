#include<iostream>
using namespace std;
main(){
int min, fps, totalframe;
cout<<"enter number of minutes";
cin>>min;
cout<<"enter frames per second";
cin>>fps;
int totalsec;
totalsec=min*60;
totalframe=totalsec*min;
cout<<"total number of frames are"<<totalframe;
}
