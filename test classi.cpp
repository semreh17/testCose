#include <iostream>
#include "noDuplication.h"
using namespace std;


int main() {
    int arr[] = {0, 1, 2,3, 1,7,3};
    int l = 7;
    noDuplication obj1(arr, l);
    obj1.arrIteration();
}