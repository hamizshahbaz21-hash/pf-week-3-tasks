#include<iostream>
using namespace std;
int main(){
int win, winp, loss, draw, drawp, totalp;
cout<<"enter number of wins";
cin>> win;
winp=win+3;
cout<<"enter a number of loss";
cin>> loss;
cout<<"enter a number of draw";
cin>> draw;
drawp=draw+1;
totalp=drawp+winp+loss;
cout<<"total points are "<<totalp<<"in asia cup";
}
