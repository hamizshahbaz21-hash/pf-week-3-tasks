#include<iostream>
using namespace std;
 main(){
string name;
int matricmarks, intermarks, ecatmarks;
float aggregate;
cout<<"enter your name";
cin>>name;
cout<<"enter matricmarks";
cin>>matricmarks;
cout<<"enter intermarks";
cin>>intermarks;
cout<<"enter ecatmarks";
cin>>ecatmarks;
aggregate=(matricmarks*0.1)/1100+(intermarks*0.4)/560+(ecatmarks*0.5)/400;
cout<<"aggregate is"<<aggregate*100;
}
