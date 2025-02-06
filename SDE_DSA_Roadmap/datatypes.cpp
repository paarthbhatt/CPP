// 1. Integer
// Syntax
// int variable_name;
// Example
// int number = 100;

// 2. Character
// Syntax
// char variable_name;
// Example
// char letter = 'A';

// 3. Boolean
// Syntax
// bool variable_name;
// Example
// bool isValid = true;

// 4. Floating Point
// Syntax
// float variable_name;
// Example
// float pi = 3.14f;

// 5. Double Floating Point
// Syntax
// double variable_name;
// Example
// double e = 2.718281828459045;

// 6. Void or Valueless
// Syntax
// void function_name() {
//     // function body
// }
// Example
// void displayMessage() {
//     cout << "Hello, World!";
// }

// 7. Wide Character
// Syntax
// wchar_t variable_name;
// Example
// wchar_t letter = L'A';


// DERIVED DATA TYPES
// 1. Function 
// Syntax: Function_Type Function_Name( Parameters )
// Example:
// #include <iostream>
// using namespace std;

// void greet() {
//     cout << "Hello, World!" << endl;
// }

// int main() {
//     greet(); // Calling the function
//     return 0;
// }

// 2. Array 
// Syntax: DataType Array_Name( size_of_array );
// Example:
// #include <iostream>
// using namespace std;

// int main() {
//     int numbers[5] = {100, 269, 370, 444, 589}; // Array of 5 integers
//     cout << "First number: " << numbers[0] << endl;
//     cout << "Second number: " << numbers[1] << endl;
//     cout << "Third number: " << numbers[2] << endl;
//     cout << "Fourth number: " << numbers[3] << endl;
//     cout << "Fifth number: " << numbers[4] << endl;
//     return 0;
// }

// 3. Pointers
// Syntax: DataType *variable_name;
// Example:
// #include <iostream>
// using namespace std;

// int main() {
//     int num = 10;
//     int *ptr = &num; // Pointer to the variable 'num'
//     cout << "Value of num: " << *ptr << endl; // Dereferencing the pointer
//     return 0;
// }

// 4. References 
// Syntax: DataType& reference_variable_name = original_variable ;
// Example:
// #include <iostream>
// using namespace std;

// int main() {
//     int num = 20;
//     int& ref = num; // Reference to the variable 'num'
//     cout << "Value of num through reference: " << ref << endl;
//     ref = 30; // Modifying the original variable via reference
//     cout << "New value of num: " << num << endl;
//     return 0;
// }


// USER-DEFINED DATA TYPES:

// 1. Class
// Syntax: 

// Class ClassName
// {
// 	Access Specifer (Can take any one of the three values)
// 	(Private, Protected, Protected)
// 	Data members (variables to be used)
// 	Member functions (Methods/Functions to access the data members)
// }; (a class always ends with a semicolon)

// 2. Structure
// Syntax: struct Structure_Name{ (variables of different data types) };

// 3. Union
// Syntax: union Union_name{ (data members) };