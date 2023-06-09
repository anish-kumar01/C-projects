#include <iostream>
using namespace std ;

int main()
{
    int age = 0;
    char again = 'y';

    while (again == 'y'| again =='Y'){
cout<<"how old are you"<< endl;
cin>>age;
if (age == 18)
   cout << "you are ready to vote"<< endl;
   else if (age<18)
   cout <<"jaake game khel"<<endl;
   else if (age>60)
   cout<<"gonna die soon"<<endl;
   else if (age > 45)
   cout<<"ja bhaag"<<endl;
   else if (age < 45)
   cout<<"ja vote de"<<endl;
    cout<<"go again ? (y/n)"<<endl;
    cin>> again ;
    }
   return 0;
}