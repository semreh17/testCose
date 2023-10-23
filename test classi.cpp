#include <cstdlib>
#include <iostream>
#include <time.h>
#include <vector>
#include "noDuplication.h"
using namespace std;


int main() {
    std::vector<int> arr;
    int l;
    srand(time(0));
    cout << "inserire la lunghezza dell'array: ";
    cin >> l;
    arr.resize(l);
    for(int i = 0; i < l; i++) {
        arr[i] = (rand() % l-1);
//        cout << arr[i] << "\t";
    }

    cout << endl;

    noDuplication obj1(arr, l);
    obj1.arrIteration();
}
