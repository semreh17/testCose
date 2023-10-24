#include <cstdlib>
#include <iostream>
#include <time.h>
#include <vector>
#include "noDuplication.h"
using namespace std;


int main() {
    //
    std::vector<int> arr;
    int l;
    srand(time(0));
    
    cout << "insert array's length: ";
    cin >> l;
    //dynamic allocation of arr with the length insert by the user
    arr.resize(l);
    for(int i = 0; i < l; i++) {
        arr[i] = (rand() % l);
        cout << arr[i] << "\t";
    }

    cout << endl << endl;

    noDuplication obj1(arr, l);
    obj1.arrIteration();
}
