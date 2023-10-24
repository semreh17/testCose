#ifndef UNTITLED_NODUPLICATION_H
#define UNTITLED_NODUPLICATION_H
#include <iostream>
#include <vector>
using namespace std;

class noDuplication {
private:
    int length;
    std::vector<int> arr;
    std::vector<int> brr;
public:
    //constructor that initialize length, arr and brr where
    //initially brr contains only INT_MAX in every index
    noDuplication(std::vector<int>& a, int l) : arr(l), brr(l) {
        length = l;
        for (int i = 0; i < l; i++) {
            arr[i] = a[i];
            brr[i] = INT_MAX;
        }
    };

    void findDuplication(int flag, int i) {
        for (int j = 0; j < length && flag; j++) {
            if (arr[i] == brr[j]) {
                flag = 0;
            }
        }
        if (flag) {
            brr[i] = arr[i];
            cout << brr[i] << "\t";
        }

    }

    void arrIteration() {
        for (int i = 0; i < length; i++) {
            int flag = 1;
            findDuplication(flag, i);
        }
    }
};

#endif //UNTITLED_NODUPLICATION_H0
