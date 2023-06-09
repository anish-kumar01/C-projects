#include <typeinfo>
#include <iostream>
int main() {
using namespace std;
    int a;  //declaring variable of type int
    float b; //declaring variable of type float
    double f =7.98; //declaring variable of type double

// we are passing the variable as a parameter in the function i.e typeid(variable_name)
    cout<<"\n type of a is: "<<  typeid(a).name(); 
    cout<<"\n type of b is:  "<< typeid(b).name();  
    cout<<"\n type of f is:  "<< typeid(f).name();
    return 0;
}
