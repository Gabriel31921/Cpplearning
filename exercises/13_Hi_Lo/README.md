**Problem:**

Implement a game of Hi-Lo. 
First, your program should pick a random integer between two configurable values. 
The user is given the number of tries he wants to guess the number.

If the user does not guess the correct number, 
the program should tell them whether they guessed too high or too low. 
If the user guesses the right number, the program should tell them they won. 
If they run out of guesses, the program should tell them they lost, 
and what the correct number is. 
At the end of the game, the user should be asked if they want to play again. 
If the user doesn’t enter ‘y’ or ‘n’, ask them again.

**Solution:**

The configurable parameters `min_value`, `max_value` and `number_tries` are going to be asked to the user.
The "randomness" is coming from a random number generator by learn.cpp in a header, that gives the function
`get(min, max)` which returns a random number in the interval, extremes inclusive.

Then we are going to ask the user for a guess, 
this will be done in a loop as many times as tries has the user.
At the end, another loop will be done when asking the player if he wants to play again,
only two possible values end the loop, 'y' and 'n'.