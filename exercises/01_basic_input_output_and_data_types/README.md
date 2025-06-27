**Problem:**

Write the following program: 
The user is asked to enter 2 floating point numbers (use doubles). 
The user is then asked to enter one of the following mathematical symbols: +, -, *, or /. 
The program computes the answer on the two numbers the user entered and prints the results. 
If the user enters an invalid symbol, the program should print nothing.

**Solution:**

We notice that we need three inputs for the desired result. 
First I design a function in order to get the numbers from the user; *obtain_number()*.
Then I design a function to get the operator; *obtain_operator()*. 
Important to note, the type of the functions are *double* and *char* respectively.
Then I have to know which operator has inserted the user, for that I use *check_operator()*.
This function checks the four basic operators and prints the result, it's a void function.
This function takes three arguments, two doubles and one char, two numbers and one op.

The hardest part here was to notice how to check for the operators,
in my case, with four if/else-if statements.