#include <iostream>
#include <fstream>
#include <vector>
#include <memory>

using namespace std;

#ifndef CLIONPROJECTS_CLASSADVENTOOFCODE5_H
#define CLIONPROJECTS_CLASSADVENTOOFCODE5_H

template<typename T>

class classAdventOfCode5 {
private:
    struct piles {
        std::vector<T> arr;
    };
    T mat[9][37];
    piles pile[9];
    int column = 37;
    int row = 9;

    //opens a file
    std::ifstream* fileOpening(char fileName[]) {
        std::ifstream* nomeFile = new std::ifstream();
        nomeFile->open(fileName);
        if (!nomeFile->is_open()) {
            cerr << "File didn't open correctly. Error: ";
            return nullptr;
        }
        return nomeFile;
    }

    //allocating space for every vector of the vector struct
    void vectorSpaceAllocator() {
        for (int i = 0; i < row; i++) {
            pile[i].arr.resize(10);
        }
    }

public:

    //puts all the characters of the .txt inside mat[][]
    void matFiller(char fileName[]) {
        std::ifstream* nomeFile = fileOpening(fileName);

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                mat[i][j] = (char)nomeFile->get();
            }
        }
        //closing the file after reading it
        nomeFile->close();
        //cleaning the memory
        delete nomeFile;
    }

    //grafted array to fill all the vectors
    void vectorsFiller() {
        vectorSpaceAllocator();
        for (int i = 8; i >= 0; i--) {
            for (int j = column - 1; j >= 0; j--) {
                if ((mat[i][j] >= 65) && (mat[i][j] <= 90)) {
                    //Calculate the pile index
                    int pileIndex = (j - 1) / 4;
                    pile[pileIndex].arr.push_back('[');
                    pile[pileIndex].arr.push_back(mat[i][j]);
                    pile[pileIndex].arr.push_back(']');
                }
            }
        }
    }

    //checks if the vectors are filled correctly
    void vectorContentChecker() {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < pile[i].arr.size() ; j++) {
                char check = pile[i].arr[j];
                if (check != ' ') {
                    cout << pile[i].arr[j];
                }
            }
            cout << endl;
        }
    }
};



#endif //CLIONPROJECTS_CLASSADVENTOOFCODE5_H
