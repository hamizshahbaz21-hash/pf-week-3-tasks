#include<iostream>
using namespace std;
main(){
float veg_price,fruits_price,totalcoins,rps,total_kg_veg,total_kg_fruits;
cout<<"enter fruits price per kg";
cin>>fruits_price;
cout<<"enter vegetable price in kg";
cin>>veg_price;
cout<<"enter total kg of vegetable";
cin>>total_kg_veg;
cout<<"enter total kg of fruits";
cin>>total_kg_fruits;
totalcoins=(fruits_price*total_kg_fruits) +(veg_price*total_kg_veg);
rps=totalcoins/1.94;
cout<<"total ernings n rupees (rps) is"<<rps;
}
