#include <iostream> 
using namespace std;
int analyzedigits(int num ,int& outsum);

int main(){

int num , countdigs , sumdigs ;
cout<<"plz enter a positive integer"<<endl;
cin>>num ;
countdigs = analyzedigits( num , sumdigs);
cout<<num<<" has "<<countdigs<<" digits and there total sum is "<<sumdigs<<endl;
return 0;
}
int analyzedigits (int num,int& outsum){
int count , sum ;
int currentdigit;
count = 0;
sum = 0;
while(num>0){
    currentdigit = num % 10;
    count++;
    sum+=currentdigit;
    num = num / 10 ;
}
outsum = sum;
return count ;
}