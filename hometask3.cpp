 #include <iostream>
using namespace std;
int main()
{
string name;
int weightlose, days_req;
cout << "Enter the name of the person: ";
cin >> name;
cout << "Enter the weight you want to lose: ";
cin >> weightlose;
days_req = weightlose * 15;

    cout << name << " will need "<< days_req<< " days to lose weight.";
}
