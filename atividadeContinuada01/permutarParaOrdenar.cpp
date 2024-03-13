#include <iostream>
#include <vector>

using namespace std;


void selectionSort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap arr[i] with the smallest element found
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main() {
    vector<int> arr = {5, 2, 3, 1, 4};
    selectionSort(arr);
    
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
}