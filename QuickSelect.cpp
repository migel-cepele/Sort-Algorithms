#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
using namespace std;

int lomutoPartition(int arr[], int m, int d) {
    int s = m;
    int i = m + 1;
    int pivot = arr[m];

    while (i <= d) {
        if (arr[i] < pivot) {
            s++;
            swap(arr[i], arr[s]);
        }
        i++;
    }
    swap(arr[m], arr[s]);
    return s;
}

int QuickSelect(int m, int d, int a[], int k) {
    if (k != 0 and k < d - m + 1) {
        
        int s = lomutoPartition(a, m, d);
        if (s - m == k - 1) {
            return a[s];
        } else if (s - m < k - 1) {
            return QuickSelect(s + 1, d, a, k - s + m - 1);
        } else {
            return QuickSelect(m, s - 1, a, k);
        }
    } else{
        return -1;
    } 
        
}

int main() {
    int a[] = {5, 11, 8, 12, 7, 6, 13, 14, 4, 2, 1, 3};

    cout << QuickSelect(0, 11, a, 1) << endl;

    for (int i = 0; i < 12; i++ ) {
        cout << a[i];
    }
}