#include<iostream>
using namespace std;
main(){
double sqrmtr, width, height, area, number_of_walls;
cout<<"number of square meter you can paint";
cin>>sqrmtr;
cout<<"width of single wall";
cin>>width;
cout<<"height of single wall";
cin>>height;
area=width*height;
number_of_walls=sqrmtr/area;
cout<<"number of walls you can paint are" <<number_of_walls;
}
