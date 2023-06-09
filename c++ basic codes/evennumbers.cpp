#include <iostream>
using namespace std;
int main () {
    int count;
   int n; 
   cout<<"please enter a positive integer"<<endl;
   cin>>n; 
   int i = 1; 
   count = 0;  
   while(count<n){ 
      if(i%2==0){ 
         cout<<i<<endl;
         count++; 
      } 
    i++;
   }  
}