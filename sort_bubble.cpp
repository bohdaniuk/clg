#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& v) {
    int size = v.size();
    bool swapped;
  
    for (int i = 0; i < size - 1; i++) {
        swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                swapped = true;
            }
        }
      
        if (!swapped)
            break;
    }
}

void printVector(const vector<int>& v) {
    for (int num : v)
        cout << " " << num;
}

int main() {
    vector<int> v = { 64, 34, 25, 12, 22, 11, 90 };
    bubbleSort(v);
    cout << "Sorted array: \n";
    printVector(v);
    return 0;
}