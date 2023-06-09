#include <iostream>
using namespace std;
int main(){
    int numofstudents;
    int count , sum;
    int curr;
    double average;
    cout<<"please enter the number of students"<<endl;
    cin>>numofstudents;
    sum=0;
    cout<<"enter the grades of the students"<<endl;
    for(count=1;count<=numofstudents;count++){
    cin>>curr;
    sum += curr;
    }
average = (double)sum / (double)numofstudents ;
cout<<"the average is "<<average<<endl;
return 0;
}

