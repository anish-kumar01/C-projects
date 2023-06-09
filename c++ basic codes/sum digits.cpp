#include <iostream>
using namespace std;
int main(){
    int num;
    int sumdigits , countdigit;
    int currentdigit;
    cout<<"please enter a positive intezer"<<endl;
    cin>>num;
    sumdigits = 0;
    countdigit = 0;
    while(num>0)//num jbtk 0 se bada rhega tbtk execute hoga while
    {currentdigit=num%10;//joh number h uska remainder nikla
    countdigit++;// joh bhi remainder nikla woh digit count krra
    sumdigits+=currentdigit;//current digit joh nikla usko sumdigit ke equal rakha
    num=num/10;/*joh bacha digit usko 10 se divide kia..toh usse ek remainder nikla
        soo sabb digit alag alag hogye*/  
        }
    cout<<"num has "<<countdigit<< " digits "<<endl;
    cout<<" and their sum is "<<sumdigits<<endl;
return 0;
}