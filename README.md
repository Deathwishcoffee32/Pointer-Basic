# Pointer-Basic
This project focuses on strengthening core C++ skills involving pointers, references, memory allocation, and basic data structures. This repository requires implementing several utility functions that manipulate integers, arrays, and a custom Point structure using both reference and pointers.

 - `swapByRef`: returns nothing, takes two integer references as parameters and
                swaps their values
 - `swapPtr`: returns nothing, take two integer pointers as parameters and swaps
                the values pointed two by the pointers
 - `biggestOfThreeByRef`: returns the largest of three integer references passed
                as references
 - `biggestOfThreeByPtr`: returns the largest of three integer values passed 
                as pointers
 - `biggestCoordinate` (reference): takes a Point object as a reference and
                returns a pointer to the largest of the two coordinate
                (`x` and `y`) of the point
 - `biggestCoordinate` (pointer): takes a pointer to a Point object and
                returns a pointer to the largest of the two coordinate
                (`x` and `y`) of the point
 - `createNewPoint`: allocates space for a new point and initializes it as
                follows: x(1), y(2), name("unnamed")
 - `findBiggest`: takes a pointer to an array and an array length as
                a parameter and returns address of the largest member
                of the array. For an array of length zero, you should
                return a null pointer.

