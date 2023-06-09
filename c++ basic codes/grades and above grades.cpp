#include <iostream>
using namespace std;
const int MAX_CLASS_SIZE=60;

int main(){
  int numofstudents;
  int gradeslist[MAX_CLASS_SIZE];
  int currgrade;
  int ind;
  int sum;
  double average;

  cout <<"please enter number of students in the class ( not more than "<<MAX_CLASS_SIZE<<")"<<endl;
  cin>>numofstudents;
  //reading the grades
  cout<<"enter the grades of students with a space"<<endl;
  for (ind=0;ind<numofstudents;ind++) {
    cin>>currgrade;
    gradeslist[ind] = currgrade;
  }
  //calculating the average
sum = 0;
for(ind=0;ind<numofstudents;ind++){
sum+=gradeslist[ind];
}
average = (double)sum/(double)numofstudents ;
cout<<"the class average is"<< average <<endl;
//print grades above average
cout<<"the grades above average are ";
for(ind=0;ind<numofstudents;ind++){
  if(gradeslist[ind]>average){
    cout<<gradeslist[ind]<<endl;
  }
}
cout<<endl;
return 0;
}