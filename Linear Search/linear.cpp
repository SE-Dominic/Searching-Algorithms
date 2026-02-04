#include <iostream>
#include <vector>
using namespace std;

int basicLinearSearch(vector<string> v, string key) {
    for (int i = 0; i < v.size() - 1; i++) {
        if (v[i] == key) {
            cout << "Key found! at index (" << i << ")" << endl;
            return i;
        }
    }
    cout << "Key not found." << endl;
    return -1;
}

int main() {
    vector<string> names;
    for (int i = 0; i < 5; i++) {
        string t_name;
        cout << i + 1 << ". Enter name: ";
        cin >> t_name;
        names.push_back(t_name);
    }
    basicLinearSearch(names, "Dom");

    return 0;
}