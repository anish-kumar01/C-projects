#include <iostream>
#include <string>
using namespace std;
string  prostr[100];
string  products;
int  bill;
int  payed;
int prices;
int num;
int i;
int n1;
int bill1;
int main(){
cout<<"how many product are purchased ?"<<endl;
cin>>n1;
//reading the name of products
for( i = 0; i<n1; i++){
    cout << "Enter product names "<< i + 1 <<" : ";
    cin>>prostr[i];
}
//reading price
for(i=0;i<n1;i++){
    cout<<"please enter price of product no :"<<i + 1<<endl;
    cin>>prices;
    bill+=prices;
}
cout<<"bill is :"<<bill<<endl;
cout<<endl;
cout<<"how much money you gave ?"<<endl;
cin>>payed;
if(bill == payed)
{
    cout<<"have a good day"<<endl;
}
 else if (bill > payed)
 {
    bill1 = bill - payed;
    cout<<" you have an remaining amount of : "<<bill1<<endl;
}
else if (bill < payed)
{
    bill = payed - bill;
cout<<"here is your change "<<bill<<endl;
cout<<"have a good day";
}
cout<<endl;
return 0;
}