#include<iostream>
using namespace std;

int binary_search(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2; // safer mid calculation
        if (key == arr[mid]) {
            return mid;
        }
        else if (key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int odd[5] = {3, 5, 7, 8, 9};
    int even[6] = {12, 23, 34, 45, 56, 67};

    int index = binary_search(odd, 5, 8);
    cout << "Index of 8 in odd: " << index << endl;

    index = binary_search(even, 6, 45);
    cout << "Index of 45 in even: " << index << endl;

    return 0;
}