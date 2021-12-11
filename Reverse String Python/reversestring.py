# Joshua Friedman

# Python is a scripting language, and therefore 
# there is no need to define a main function.
# The program's entry point is automatically
# defined as the first line of code and the 
# program is run line by line. 

# Prompt the user to input and take the user's input,
# and becasue Python is dynamically typed, there is no
# need to specify variable type
str = input("Input a string to be reversed, or type exit to quit:\n")

# Since Python reads code line by line we can define
# the function in the middle of the program, as long
# as it is defined before its first use.
def reverseString(str):

    # Back slash the string starting from the end of it
    # and iterating backwards by one, until the front is reached
    reversedstr = str[: : -1]
    
    # Print the reverse string
    print("The reversed string is: ")
    print(reversedstr)
    print("\n")

# Start a loop that lasts until the user
# inputs the word "exit"
while str != "exit":

    # Call the function to reverse the string
    reversedstr = reverseString(str)

    # Get a new string to reverse, or allow the user
    # to exit
    str = input("Input a string to be reversed, or type exit to quit:\n")

# Garbage collection is automatic and therefore everything that has not already
# been deallocated will be deallocated for us right here, so there is no need 
# to manually deallocate memory