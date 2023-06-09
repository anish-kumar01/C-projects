#include<iostream>
using namespace std;
int main() {
int i , n;
int curr , max;
float arr[100];
cout<<"Enter total number of elements(1 to 100): ";
cin>>n;
cout<<endl;
//read the elements
for(i = 0; i < n; i++) {
    cout << "Enter Number " << i + 1 << " : ";
    cin >> arr[i];
  }
//max value will add if given numbers are bigger than max
  curr=arr[0];
  max=arr[0];
  for(i=0;i<n;i++){
     if(max<arr[i]){
        max=arr[i];
     }
  }
  cout<<"max value is :"<<max<<endl;

   return 0;
}