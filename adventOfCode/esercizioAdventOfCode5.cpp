#include <iostream>
#include <fstream>
#include "classAdventOfCode5.h"

using namespace std;

int main() {
    classAdventOfCode5<char> obj1;
    char fileName[] = "C:/Users/sempr/CLionProjects/untitled/adventOfCode/adventOfCodeStorage.txt";

    obj1.matFiller(fileName);
    obj1.vectorsFiller();

}
