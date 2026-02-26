// Lei-lani Perez CS2281

#include "mypointers.h"
#include <stdexcept>
using namespace std;

void swapByRef(int &a, int &b) {                       //takes two integer references as parameters and swaps their values
    int temp = a;
    a = b;
    b = temp;
}
void swapPtr(int *a, int *b) {                      //take two integer pointers as parameters and swaps the values pointed two by the pointers
    if (a && b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}
int biggestOfThreeByRef(int &a, int &b, int &c) {     // returns the largest of three integer references passed as references
    int max = a;
    if (b > max){
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}
int biggestOfThreeByPtr(int *a, const int *b, int *c) {      //returns the largest of three integer values passed as pointers
    int max = *a;
    if (*b > max) {
        max = *b;
    }
    if (*c > max) {
        max = *c;
    }
    return max;
}
int* biggestCoordinate(Point &p) { //takes a Point object as a reference and returns a pointer to the largest of the two coordinate (x and y) of the point
    if (p.x > p.y) {
        return &p.x;
    }else {
        return &p.y;
    }
}

int* biggestCoordinate(Point *p) {                          // takes a pointer to a Point object and returns a pointer to the largest of the two coordinate (x and y) of the point
    if (p->x > p->y) {                                       // . is used when you have an object
        return &p->x;                                        // -> is used when you have a pointer to an object?
    } else {
        return &p->y;
    }
}
Point *createNewPoint() {                                     //allocates space for a new point and initializes it as follows: x(1), y(2), name("unnamed")
    Point* newPoint = new Point;
    newPoint->x = 1;
    newPoint->y = 2;
    newPoint -> name = "unnamed";
    return newPoint;
}
int* findBiggest(int *array, size_t arrayLen) {               //takes a pointer to an array and an array length as a parameter and returns address of the largest member of the array. For an array of length zero, you should return a null pointer.
    if (arrayLen == 0) {                                        //   || is a OR operator true or false like bool (logical Operator)
        return nullptr;
    }
    int* maxPtr = &array[0];
    for (size_t i = 1; i < arrayLen; i++) {
        if (array[i] > *maxPtr) {
            maxPtr = &array[i];
        }
    }
    return maxPtr;
}




