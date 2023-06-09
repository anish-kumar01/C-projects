#include <iostream>
#include <cmath>
using namespace std;
int quadratic(double a, double b,double c,double& outx1, double& outx2);
int linear (double a, double b,double& outx);
const int NO_SOLUTION = 0;
const int ONE_REAL_SOLUTION = 1;
const int TWO_REAL_SOLUTIONS = 2;
const int ALL_REALS = 3 ;
const int NO_REAL_SOLUTIONS = 4 ;
int main(){
double a , b ,c ,x1 ,x2;
cout<<"plz enter coeffients of quadratic equation :"<<endl;
cin>>a>>b>>c;
cout<<"the equation: "<<a<<"x^2 +"<<b<<"x+"
<<c<<"= 0"<<endl;
switch (quadratic(a,b,c,x1,x2)){
    case TWO_REAL_SOLUTIONS:
    cout<<"solutions : "<<x1<< " "<<x2<<endl;
    break;
    case ONE_REAL_SOLUTION:
    cout <<"one solution : "<<x1<<endl;
    break;
    case NO_REAL_SOLUTIONS :
    cout<<"no real solution"<<endl;
    break;
    case NO_SOLUTION :
    cout<<"no solution"<<endl;
    break;
    case ALL_REALS:
    cout<<"all real numbers are solutions"<<endl;
    break;
    default :
    cout<<"error"<<endl;
    break;
}
return 0;
}
int quadratic(double a, double b,double c,double& outx1, double& outx2){
    double delta , x1,x2;
    if (a!=0.0){
        delta = b*b - 4*a*c;
        if (delta>0){
            x1=(-b + sqrt(delta))/(2*a);
            x2 = ( -b - sqrt(delta)) /(2*a);
            outx1 = x1;
            outx2 =x2;
            return TWO_REAL_SOLUTIONS;                
        }
        else if (delta == 0){
            x1 = -b/(2*a);
            outx1 = x1;
            return ONE_REAL_SOLUTION;
        }
        else 
        return NO_REAL_SOLUTIONS;
    }
    else
    return linear (b , c,outx1);
}
int linear (double a, double b,double& outx){
    double x;
    if(a !=0){
        x = -b/a;
        outx = x;
        return ONE_REAL_SOLUTION;
    }
    else if  ((a == 0) && (b==0)){
        x = 0;
        outx = x;
        return ALL_REALS;
    }
    else
    return NO_REAL_SOLUTIONS;
}
