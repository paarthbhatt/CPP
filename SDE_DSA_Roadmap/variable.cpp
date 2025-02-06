// Local variable
// A variable that is declared inside the function or block is known as a local variable. 
// We can access this type of variable only inside the function. If we use it outside the function, then it gives an error.

// Example:
// #include <iostream>
// using namespace std;
// //initialising a function
// void fun()
// {
//     int val=10;
//     cout<<val<<endl;
    
// }
// int main() {
  
//     fun();
//     cout<<val<<endl; // here give an error that val is not declared
//     return 0;
// }

// Global variable
// Variables that are declared outside the function or block are called global variables. 
// These types of variables can be accessed anywhere in the program. Global variables are usually declared on top of all functions. 
// This is a less secure variable than local variables.

//Example:
#include <iostream>
using namespace std;
int k=15; // k is a global variable.
void fun()
{
    int val=10;
    cout<<k<<endl;
    cout<<val<<endl;
    
}
int main() {

    fun();
    cout<<k<<endl;
    return 0;
}