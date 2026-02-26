// leilani perez CS2281

#include <string>

struct Point {
    std::string name;
    int x;
    int y;
};

// Function prototypes go here
void swapByRef(int &a, int& b);
void swapPtr(int *a, int *b);
int biggestOfThreeByRef(int &a, int &b, int &c);
int biggestOfThreeByPtr(int *a, const int *b, int *c);
int* biggestCoordinate(Point &);
int* biggestCoordinate(Point *);
Point *createNewPoint();
int* findBiggest(int *array, size_t arrayLen);
