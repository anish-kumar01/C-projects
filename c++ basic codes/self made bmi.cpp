#include <iostream>
using namespace std;
double num1;
double num2;
double BMI;
double sum;
int main(){
    //inputs from user
    cout<<"enter your weight in kg"<<endl;
    cin>>num1;
    cout<<"enter your height in meters "<<endl;
    cin>>num2;
    BMI= (double) num1 / (double)(num2 * num2);
    cout<<"BMI of "<<num1<< " and "<<num2<<" are: "<<BMI<<endl;
    if(BMI>30)
    cout<<" you are overweight"<<endl;
    else  if (BMI<25)
    cout<<"you are under weight"<<endl;
    else if (25<= BMI <30)
    cout<<"you are healthy"<<endl; 
    
    return 0;
}