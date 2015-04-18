//
//  main.cpp
//  learning-cpp
//
//  Created by Jamie Patel on 18/04/2015.
//  Copyright (c) 2015 Jamie Patel. All rights reserved.
//

#include <iostream>

using namespace std;

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    cout << "Hello, World!\n";
//    return 0;
//}


// declaring variables

//int main(){
//    int a, b;
//    int result;
//    
//    a = 5;
//    b = 2;
//    a = a + 1;
//    
//    cout << a;
//    
//    result = a - b;
//    
//    cout << result;
//    
//    return 0;
//}

// variables can be initialized also with () constructor and {}

//int main(){
//    int a = 5;
//    int b(3);
//    int c{2};
//    int result;
//    
//    a = a + b;
//    result = a - c;
//    cout << result;
//    return 0;
//}


// type deduction

//int main(){
//    int foo = 0;
//    auto bar = foo;
//    
//    cout << bar;
//    return 0;
//}

#include <string>

//intro to strings

//int main(){
//    string mystring;
//    mystring = "This is a string";
//    
//    /* 
//     string mystring ("This is a string");
//     string mystring {"This is string"};
//     */
//    
//    
//    cout << mystring;
//    return 0;
//}

//int main(){
//    string mystring;
//    mystring = "This is the initial string content";
//    cout << mystring << endl;
//    mystring = "This is a different string content";
//    cout << mystring << endl; // endl ends the line by printing a new line and flushing the stream
//    return 0;
//}
//



//CONSTANTS

// with const

//int main(){
//    const double pi = 3.141592654;
//    const char newline = '\n';
//    
//    double r = 5.0;
//    double circle;
//    
//    circle = 2 * pi * r;
//    cout << circle;
//    cout << newline;
//}

// with define

//#define PI 3.141592654 // do not require semicolons at the end
//#define NEWLINE '\n'
//
//int main(){
//    double r = 5.0;
//    double circle;
//    
//    circle = 2 * PI * r;
//    cout << circle;
//    cout << NEWLINE;
//}

//typecasting

//int main(){
//    int i;
//    float f = 3.14;
//    i = (int) f; // casts into an int
//    cout << i;
//}

// sizeof

//int main (){
//    int x = sizeof(char);
//    cout << x;
//}

// Basic I/O

/*
 cin => std input stream
 cout => std output stream
 cerr => standard error
 clog => std logging
 */

//int main (){
//    int i;
//    cout << "Please enter an integer value: ";
//    cin >> i;
//    cout << "The value you entered is " << i;
//    cout << " and its double is " << i * 2 << ".\n";
//    return 0;
//}


// cin always consideres spaces (whitespaces, tabs, newline) to be terminating the value being extracted
// extracting a string always gets a single word
// getline gets an entire line

//int main(){
//    string mystr;
//    cout << "What's your name?";
//    getline(cin, mystr);
//    cout << "Hello " << mystr << ".\n";
//    cout << "What's your favourite team? ";
//    getline(cin, mystr);
//    cout << "I like " << mystr << " too!\n";
//    return 0;
//}













