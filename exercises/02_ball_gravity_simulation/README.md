**Problem:**

Write a short program to simulate a ball being dropped off of a tower. 
To start, the user should be asked for the height of the tower in meters. 
Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start). 
Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. 
The ball should not go underneath the ground (height 0).

Use a function to calculate the height of the ball after x seconds. 
The function can calculate how far the ball has fallen after x seconds using the following formula: 
distance fallen = gravity_constant * x_seconds2 / 2

**Solution:**

We have to design a program that simulates the falling of a ball from a tower.
The tower is *m* meters tall, that is an input and will require its own function.
The function *meters_tower()* doesn't need parameters and returns a double.
Then the ball starts to fall, and as we only need to the height at *t*, we will do discrete measurements.
With the formula *gravity times seconds squared over 2* we will measure discrete distances.
Then, we will subtract from the height of the tower these distances, making sure we are always above 0 meters.
And then we will output the height of the ball each second.

The solution would be better with loops, but this exercise is form chapter 4 of learn.cpp, before loops.

