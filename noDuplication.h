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
    //costruttore che inizializza l e arr che sono protected
    noDuplication(std::vector<int>& a, int l){
        length = l;
        for (int i = 0; i<l; i++) {
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

#endif //UNTITLED_NODUPLICATION_H
