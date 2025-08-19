#include <iostream>
#include <climits>
using namespace std;

int get_max(int num[], int n)
{
    int mx = INT_MIN;           // start below any possible value
    for (int i = 0; i < n; ++i) // iterate 0..n-1
    {
        if (num[i] > mx)
            mx = num[i];
    }
    return mx;
}

int main()
{
    int size;
    cin >> size;

    if (size < 0 || size > 100) {
        cerr << "Invalid size\n";
        return 1;
    }

    int num[100];
    for (int i = 0; i < size; ++i) { // strictly < size
        cin >> num[i];
    }

    cout << "Max Number is " << get_max(num, size) << '\n';
}
