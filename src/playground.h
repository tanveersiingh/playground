#pragma once
#include <array>
#include <iostream>


using namespace std;

array<int, 10> myArray = {1, 12, 23, 34, 45, 56, 23, 66, 75, 100};

for (int i = 0; i < myArray.size(); i++) {
        int compareTo = myArray[i];
        for (int j = i + 1; j < myArray.size(); j++) {
            if (compareTo == myArray[j]) {
                cout << "Duplicated number is: " << compareTo << " at index " << j << endl;
            }
        }
    }


    