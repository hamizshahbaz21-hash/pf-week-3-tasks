#include<iostream>
using namespace std;
int main(){
int mb;
float bits ,kb,bytes;
cout<<"enter megabytes";
cin>>mb;
kb=mb*1024;
bytes=kb*1024;
bits=bytes*8;
cout<<mb<<"mb is equal to "<<bits<<"bit";
}
