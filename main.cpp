
// // #include<iostream>

// // int main() {
// //     std::cout << "Hey, Parth!" << std::endl;
// //     std::cout << "I'm Learning C++" << std::endl;
// //     return 0;
// // }]

// // This is a C++ program that prints a message to the console.
// // The '#include<iostream>' directive includes the iostream standard file to perform input/output operations.
//         #include<iostream>

// // The 'using namespace std;' directive allows the use of standard library elements without prefixing them with 'std::'.
//         using namespace std;

// // The 'int main()' function is the entry point of the program where execution begins.
//         int main() {
//     // The 'cout' object is used to insert data into the output stream.
//     // The '<<' operator is the insertion operator that inserts data into the output stream.
//     // The 'endl' manipulator is used to insert a new line and flush the buffer.
//             cout << "Hey, Parth!" << endl;  // Print a greeting message.
//             cout << "I'm Learning C++" << endl;  // Print a message indicating the learning process.
//             return 0;  // Return an integer value indicating the program's execution status.
//         }


// #include<iostream>
// using namespace std;

// int main() {
//     int x, y; // Declare variables on the same line
//     cout << "Enter values for x and y: ";
//     cin >> x >> y;
//     cout << "Value of x: " << x << " and y: " << y; // Use double quotes consistently
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int x, y; 
//     cout << "Enter values for x and y: ";
//     cin >> x >> y;
//     cout << "Value of x: " << x << " and y: " << y;
//     return 0;
// }

// If-Else Statements

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// int age=10;


// if (age >= 18) {
//     cout << "You are an adult." << endl;
// } else {
//     cout << "You are not an adult." << endl;
// }

// }

// #include<iostream>
// using namespace std;

// int main() {
//     int marks = 84;


//     if (marks < 25) {
//         cout << "Grade: F" << endl;
//     } else if (marks >= 25 && marks <= 44) {
//         cout << "Grade: E" << endl;
//     } else if (marks >= 45 && marks <= 49) {
//         cout << "Grade: D" << endl;
//     } else if (marks >= 50 && marks <= 59) {
//         cout << "Grade: C" << endl;
//     } else if (marks >= 60 && marks <= 69) {
//         cout << "Grade: B" << endl;
//     } else if (marks >= 70) {
//         cout << "Grade: A" << endl;
//     } else {
//         cout << "Invalid marks entered." << endl;
//     }

//     return 0;
// }

// #include<iostream>

// int main() {
//     int marks = 84;
//     char grade;

//     if (marks < 0 || marks > 100) {
//         grade = 'X'; // Use 'X' to indicate invalid marks
//     } else if (marks < 25) {
//         grade = 'F';
//     } else if (marks <= 44) {
//         grade = 'E';
//     } else if (marks <= 49) {
//         grade = 'D';
//     } else if (marks <= 59) {
//         grade = 'C';
//     } else if (marks <= 69) {
//         grade = 'B';
//     } else {
//         grade = 'A';
//     }

//     std::cout << "Grade: " << grade << std::endl;
    
//     return 0;
// }
    

// #include <iostream>
// using namespace std;

// int main() {
//     const int x = 10;
//     const int y = 10;

//     switch (x + y) {
//         case 15:
//             cout << "Result is 15." << endl;
//             break;
//         case 20:
//             cout << "Result is 20." << endl;
//             break;
//         default:
//             cout << "No match found." << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    char grade = 'B';

    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good!" << endl;
            break;
        default:
            cout << "Not specified." << endl;
    }

    return 0;
}