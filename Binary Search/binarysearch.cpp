#include <iostream>
#include <algorithm> //for sort() function
using namespace std;

template <class T>
int binarySearch(T ar[], int n, T key) { //returns index where value was found
    int l, r;
    l = 0;
    r = n - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (ar[m] == key) {
            return m;
        } else if (ar[m] > key) {
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    return -1;
}

int main() {
    int array[10] = {10, 25, 7, 4, 23, 65, 54, 82, 40, 73};
    sort(array, array + 10); //MUST sort array first
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    int idx = binarySearch(array, 10, 65);
    cout << "Found At: " << idx << endl;
    return 0;
}