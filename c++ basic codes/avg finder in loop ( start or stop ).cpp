#include <iostream>
using namespace std;
int main(){
    bool stop;
    int sum , numofstudents;
    int curr ;
    int average;
    cout<<"enter the grades seprated by space"<<endl;
    cout<<"end it by typing -1"<<endl;
    sum=0;
    numofstudents=0;
    stop=false;
    while(stop == false){
        cin>>curr;
        if(curr==-1){
            stop = true;
        }
        else{
            sum+=curr;
            numofstudents++;
        }
    }
    average= (double)sum / (double)numofstudents;
    cout<<"the total is"<<average<<endl;
    cout<<"the num of students is "<<numofstudents<<endl;
return 0;
}