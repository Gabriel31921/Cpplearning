**Problem:**

Write a program that simulates a ball falling of a tower. 
The program should output the ball height every second.

**Solution:**

We have a tower, so we need to know the height of the tower.
Either we define the height, or ask the user for a height, let's go with the latter.
Then using very basic physics, we get the distance traveled by the ball in free fall each second.
We just have to define the formula:

        Distance = initial velocity * time + 1/2 * acceleration * time^2
As the time for the fall of the ball is undefined, we will use a `for` loop, 
with the condition being the ball has not yet touched the ground, this is,
the height of the ball is over 0 meters.