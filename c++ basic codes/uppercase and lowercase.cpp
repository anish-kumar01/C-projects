#include <iostream>
using namespace std;
  int main()
  {
   char userch;
   cout << "enter a character"<<endl;
   cin>>userch;
   if (userch>='a'&&userch<='z')
   cout<<userch<<" is a lower case letter "<<endl;
   else if (userch>='A'&&userch<='Z')
   cout<<userch<<" is a upper case letter "<<endl;
   else if (userch>= '0'&&userch<='9')
   cout<<userch<<" is a digit "<<endl;
   else 
   cout<<userch<<"is not a alpha numeric character"<<endl;
   return 0;

  }