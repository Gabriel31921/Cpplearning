**Problem:**

Write a program that asks the user to input an integer, and tells the user whether the number is even or odd. 
Write a constexpr function called isEven() that returns true if an integer passed to it is even, and false otherwise.

**Solution:**

The problem already tells us what function to use, we just have to make sure it works well.
One thing to take into account is to not output something into the console in a constexpr function,
if that output is dependent on a parameter, because then it's not constant and can't be evaluated at compile time.