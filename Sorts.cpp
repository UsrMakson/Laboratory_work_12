#include "Header.h"
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void Simple_trades(vector <int> &arr, int n) {
    ofstream f;
    f.open("protocol.txt");
    for (int i : arr)
        f << i << " ";
    f << endl;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) 
            if (arr[j] > arr[j + 1]) 
                swap(arr[j], arr[j + 1]);
        cout << " : ";
        for (int k = 0; k < n; k++) {
            if (k == n - i - 1) {
                cout << "| ";
                f << "| ";
            }
            cout << arr[k] << " ";
            f << arr[k] << " ";
        }
        f << endl;
        cout << endl;
    }
    cout << "-------------------------------------------------------------------" << endl;
    cout << " : ";
    for (int i : arr) {
        cout << i << " ";
        f << i << " ";
    }
    f.close();
}