#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int hash[100000] = {0}; // choose a large enough size, not n+1
                            // (because elements can be up to any number)

    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int Q;
    cout << "Enter number of queries: ";
    cin >> Q;

    while (Q--) {
        int number;
        cin >> number;
        cout << "Count of " << number << " = " << hash[number] << endl;
    }

    return 0;
}
