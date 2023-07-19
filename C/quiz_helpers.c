#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"  


char* languages[] = { "Java", "Python", "C", "C++", "JavaScript" };

typedef struct Question {
    char* ask;
    char* options[4];
    int answer;
} Question;

Question java[10] = {
    {"What is the output of the following code snippet?\n\npublic class Main {\n    public static void main(String[] args) {\n        String str = \"Java\";\n        str.concat(\" is awesome\");\n        System.out.println(str);\n    }\n}", {"Java", "Java is awesome", "is awesome", "Compilation error"}, 0},
    {"What is the difference between '==', '.equals()', and '.compareTo()' in Java?", {"They are all equivalent", "'==' compares the values of primitive types, '.equals()' compares the content of objects, '.compareTo()' compares the lexicographical order of strings", "'==' compares the memory addresses of objects, '.equals()' compares the lexicographical order of strings, '.compareTo()' compares the values of primitive types", "'==' compares the memory addresses of objects, '.equals()' compares the content of objects, '.compareTo()' compares the lexicographical order of strings"}, 1},
    {"What is the purpose of the 'transient' keyword in Java?", {"To specify that a variable cannot be modified", "To specify that a variable should not be serialized", "To specify that a variable can only be accessed within the same package", "To specify that a variable can only be accessed within the same class"}, 1},
    {"What is the purpose of the 'volatile' keyword in Java?", {"To specify that a variable cannot be modified", "To specify that a variable should not be serialized", "To specify that a variable can only be accessed within the same package", "To ensure that a variable is always read from and written to the main memory, not from a thread's cache"}, 3},
    {"What is the difference between 'final', 'finally', and 'finalize' in Java?", {"They are all equivalent", "'final' is used to define a constant, 'finally' is used to define a block of code that will be executed regardless of exceptions, 'finalize' is a method called by the garbage collector before an object is destroyed", "'final' is used to define a block of code that will be executed regardless of exceptions, 'finally' is a method called by the garbage collector before an object is destroyed, 'finalize' is used to define a constant", "'final' is a method called by the garbage collector before an object is destroyed, 'finally' is used to define a constant, 'finalize' is used to define a block of code that will be executed regardless of exceptions"}, 1},
    {"What is the purpose of the 'assert' keyword in Java?", {"To check if a variable is null", "To check if a condition is true and throw an error if it's false", "To check if a number is positive", "To check if a loop condition is true"}, 1},
    {"What is the difference between checked exceptions and unchecked exceptions in Java?", {"They are the same", "Checked exceptions are checked at compile-time and must be handled or declared, while unchecked exceptions are not checked at compile-time", "Checked exceptions are not checked at compile-time, while unchecked exceptions must be handled or declared", "Checked exceptions and unchecked exceptions are both checked at runtime"}, 1},
    {"What is the purpose of the 'super' keyword in Java?", {"To call a method from the superclass", "To create a new instance of a class", "To access the current object", "To define a constant"}, 0},
    {"What is the difference between method overloading and method overriding in Java?", {"They are the same", "Method overloading is defining multiple methods with the same name but different parameters in the same class, while method overriding is defining a method in the subclass that has the same signature as a method in the superclass", "Method overloading is defining a method in the subclass that has the same signature as a method in the superclass, while method overriding is defining multiple methods with the same name but different parameters in the same class", "Method overloading and method overriding both involve defining multiple methods with the same name but different parameters"}, 1},
    {"What is the purpose of the 'this' keyword in Java?", {"To call a method from the superclass", "To create a new instance of a class", "To access the current object", "To define a constant"}, 2}
};

Question python[10] = {
    {"What is Python?", {"A high-level programming language", "A type of snake", "A video game", "A data structure"}, 0},
    {"Which of the following is NOT a valid data type in Python?", {"int", "float", "boolean", "string"}, 2},
    {"What is the output of the following code snippet?\n\nmy_list = [1, 2, 3]\nprint(my_list * 2)", {"[1, 2, 3, 1, 2, 3]", "[1, 4, 9]", "6", "Error: unsupported operand type(s) for *: 'list' and 'int'"}, 0},
    {"What is the correct way to comment a single line in Python?", {"// This is a comment", "# This is a comment", "/* This is a comment */", "<!-- This is a comment -->"}, 1},
    {"Which of the following is an example of a mutable data type in Python?", {"tuple", "string", "list", "set"}, 2},
    {"What is the purpose of the 'range()' function in Python?", {"To generate a sequence of numbers", "To calculate the length of a list", "To reverse the order of elements in a string", "To check if a value exists in a dictionary"}, 0},
    {"What is the output of the following code snippet?\n\nprint(3 < 5 and 5 < 2)", {"True", "False", "Error: invalid syntax", "Error: unsupported operand type(s) for <: 'int' and 'bool'"}, 1},
    {"What is the purpose of the 'break' statement in Python?", {"To exit the current loop and resume execution at the next statement", "To skip the current iteration of a loop and continue with the next iteration", "To check if a condition is true and throw an error if it's false", "To define a constant"}, 0},
    {"What is the difference between 'append()' and 'extend()' methods in Python?", {"They are equivalent", "'append()' is used to add a single element to a list, while 'extend()' is used to add multiple elements", "'append()' is used to add multiple elements to a list, while 'extend()' is used to add a single element", "'append()' is used to concatenate two lists, while 'extend()' is used to remove elements from a list"}, 1},
    {"What is the purpose of the 'lambda' keyword in Python?", {"To define a temporary variable", "To define a constant", "To create an anonymous function", "To declare a list"}, 2}
};

Question c[10] = {
    {"What is the size of the 'int' data type in C?", {"2 bytes", "4 bytes", "8 bytes", "Depends on the compiler"}, 1},
    {"What is the output of the following code snippet?\n\n#include <stdio.h>\n\nint main() {\n    int x = 5;\n    printf(\"%d\", x++);\n    return 0;\n}", {"5", "6", "0", "Undefined"}, 0},
    {"Which header file is required to use the 'malloc()' function in C?", {"<stdio.h>", "<stdlib.h>", "<math.h>", "<string.h>"}, 1},
    {"What is the correct way to declare a constant in C?", {"constant int x = 5;", "int x = constant 5;", "const x = 5;", "const int x = 5;"}, 3},
    {"What is the purpose of the 'sizeof' operator in C?", {"To calculate the size of a variable or data type", "To perform addition and subtraction", "To compare two variables", "To access the memory address of a variable"}, 0},
    {"What is the output of the following code snippet?\n\n#include <stdio.h>\n\nint main() {\n    printf(\"%d\", sizeof(1.5));\n    return 0;\n}", {"2", "4", "8", "Undefined"}, 1},
    {"What is the purpose of the 'fgets()' function in C?", {"To read a string from the standard input", "To perform mathematical calculations", "To allocate memory for an array", "To compare two strings"}, 0},
    {"What is the output of the following code snippet?\n\n#include <stdio.h>\n\nint main() {\n    int i;\n    for (i = 0; i < 5; i++) {\n        printf(\"%d \", i);\n    }\n    return 0;\n}", {"0 1 2 3 4", "1 2 3 4 5", "0 1 2 3 4 5", "Undefined"}, 0},
    {"What is the difference between '==' and '=' in C?", {"They are equivalent", "'==' is used for assignment, while '=' is used for comparison", "'==' is used for comparison, while '=' is used for assignment", "'==' is used to check if two variables have the same value, while '=' is used to assign a value to a variable"}, 2},
    {"What is the purpose of the 'break' statement in C?", {"To exit the current loop and resume execution at the next statement", "To skip the current iteration of a loop and continue with the next iteration", "To check if a condition is true and throw an error if it's false", "To define a constant"}, 0}
};

Question cpp[10] = {
    {"What is the difference between C and C++?", {"C is a procedural programming language, while C++ is a combination of procedural and object-oriented programming", "C is an older version of C++", "C is used for web development, while C++ is used for mobile app development", "C does not support functions, while C++ does"}, 0},
    {"What is the output of the following code snippet?\n\n#include <iostream>\n\nint main() {\n    int x = 5;\n    std::cout << x++;\n    return 0;\n}", {"5", "6", "0", "Undefined"}, 0},
    {"Which header file is required to use the 'cin' and 'cout' objects in C++?", {"<stdio.h>", "<stdlib.h>", "<math.h>", "<iostream>"}, 3},
    {"What is the correct way to declare a class in C++?", {"class MyClass {}", "class MyClass;", "MyClass class {}", "MyClass = class {};"}, 0},
    {"What is the purpose of the 'const' keyword in C++?", {"To define a constant", "To specify the entry point of a program", "To allocate memory for an object", "To indicate a method is not implemented"}, 0},
    {"What is the output of the following code snippet?\n\n#include <iostream>\n\nint main() {\n    std::cout << sizeof(1.5);\n    return 0;\n}", {"2", "4", "8", "Undefined"}, 1},
    {"What is the purpose of the 'new' keyword in C++?", {"To allocate memory for an object", "To define a constant", "To create a new instance of a class", "To check if a condition is true and throw an error if it's false"}, 2},
    {"What is the difference between 'public', 'private', and 'protected' access specifiers in C++?", {"They are equivalent", "'public' allows access to all members, 'private' allows access only within the same class, 'protected' allows access within the same class and derived classes", "'public' allows access within the same class, 'private' allows access only within the same file, 'protected' allows access within the same package", "'public' allows access within the same package, 'private' allows access only within the same class, 'protected' allows access within the same package and derived classes"}, 1},
    {"What is the purpose of the 'virtual' keyword in C++?", {"To define a constant", "To mark the end of a program", "To indicate a method is not implemented", "To allow polymorphic behavior and late binding in derived classes"}, 3},
    {"What is the difference between function overloading and function overriding in C++?", {"They are equivalent", "Function overloading is defining a function with the same name but different parameters in the same class, while function overriding is defining a function in the derived class that has the same signature as a function in the base class", "Function overloading is defining a function in the derived class that has the same signature as a function in the base class, while function overriding is defining a function with the same name but different parameters in the same class", "Function overloading and function overriding both involve defining a function with the same name but different parameters"}, 1}
};

Question javascript[10] = {
    {"What is JavaScript?", {"A programming language for creating interactive websites", "A type of coffee", "A video game", "A data structure"}, 0},
    {"Which of the following is NOT a valid data type in JavaScript?", {"int", "boolean", "string", "object"}, 0},
    {"What is the output of the following code snippet?\n\nconsole.log(2 + '2');", {"22", "4", "NaN", "Error: invalid operation"}, 0},
    {"What is the correct way to declare a variable in JavaScript?", {"variable x = 5;", "x = 5;", "var x = 5;", "int x = 5;"}, 2},
    {"What is the purpose of the 'typeof' operator in JavaScript?", {"To check the type of a variable", "To perform mathematical calculations", "To concatenate two strings", "To compare two variables"}, 0},
    {"What is the output of the following code snippet?\n\nconsole.log(3 === '3');", {"true", "false", "Error: invalid operation", "Error: type mismatch"}, 1},
    {"What is the purpose of the 'setTimeout()' function in JavaScript?", {"To pause the execution of a program for a specific time interval", "To perform asynchronous operations", "To add an event listener to an element", "To create a loop"}, 1},
    {"What is the difference between '==' and '===' in JavaScript?", {"They are equivalent", "'==' performs type coercion, while '===' performs strict equality checking", "'==' performs strict equality checking, while '===' performs type coercion", "'==' is used for assignment, while '===' is used for comparison"}, 1},
    {"What is the purpose of the 'break' statement in JavaScript?", {"To exit the current loop and resume execution at the next statement", "To skip the current iteration of a loop and continue with the next iteration", "To check if a condition is true and throw an error if it's false", "To define a constant"}, 0},
    {"What is the purpose of the 'querySelector()' method in JavaScript?", {"To select and modify HTML elements", "To perform mathematical calculations", "To add event listeners to elements", "To define a constant"}, 0}
};


Question* quizList[5] = { java, python, c, cpp, javascript };