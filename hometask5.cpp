#include<iostream>
using namespace std;
main(){
string name;
int adult_ticket_price,child_price_ticket, adulttsold, childtsold;
int final_income;
float charity,percent;
cout<<"enter the movie name";
cin>>name;
cout<<"enter adult ticket price";
cin>>adult_ticket_price;
cout<<"enter the child ticket price";
cin>>child_price_ticket;
cout<<"enter the number of adult ticket sold";
cin>>adulttsold; 
cout<<"enter the number of child ticket sold";
cin>>childtsold;
cout<<"enter the percentage amount donated";
cin>>charity;
int adultincome,childincome,totalincome;
adultincome=adult_ticket_price*adulttsold;
childincome=child_price_ticket*childtsold;
totalincome=childincome+adultincome;
cout<<"totalincome is"<<totalincome;
percent=totalincome*(charity/100);
cout<<"the amount to be donated in charity is "<<percent;
final_income=totalincome-percent;
cout<<"finalincome after charity is"<<final_income;
}
