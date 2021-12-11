// Joshua Friedman
#include <iostream>
#include <string>

std::string reverseString(std::string str){

    // Input: A string, str
    // Output: The reverse of the given string

    // Declare a pointer to a string 
    std::string *ptr;
    
    // Dynamically allocate a string and assign the pointer
    // ptr to point at it. C++ does not support garbage collection
    // this means that all dynamic memory must be all be handled
    // manually
    ptr = new std::string;  

    // Declare an integer to be used as a pointer,
    // its value is set to the location of the last 
    // character in the string before the null terminator.
    int x = (str.length() - 1);
    
    // C++ is statically typed, therefore the type of every
    // variable must be expilicitally stated, as seen above.
    
    // A for loop that will run until the null terminator 
    // of str is reached.
    for(int y = 0; y < str.length(); y++){

        // Push the character at location x into the dynamic string
        ptr->push_back(str[x]);

        // Decrement x to move to the next character in reversal
        // process
        x--;
    
    }

    // Set str to equal ptr, we need to delete ptr
    // before the return statement and the parameter
    // was passed by value so this does not matter
    str = *ptr;

    // Manually deallocate the memory
    delete ptr;

    // Return the reversed string
    return str;
}

// In C++ the user must define the entry point
// as a function named main. If a main function
// was not specified, then the program would have
// no idea where to start at run time
int main(){

    // Declare a pointer to a string 
    std::string *ptr;

    // Dynamically allocate a string and assign the pointer
    // ptr to point at it.
    ptr = new std::string; 

    while(*ptr != "exit"){

        // Prompt the user to input a string
        std::cout << "Input a string to be reversed, or type exit to quit:\n";

        // Take the user's input into the dynamically allocated string
        std::cin >> *ptr;

        if (*ptr != "exit"){
            // Run the function and print the result
            std::cout << "The reversed string is: " << reverseString(*ptr) << "\n";
        }
    }

    // Manually deallocate the memory
    delete ptr;

    // Exit the program
    return 0;
}