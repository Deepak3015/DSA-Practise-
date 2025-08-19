#include <iostream>
using namespace std;

void print_array(int arr[],int n) 
    {
        for (int i = 0;i<n;i++)
            {
                    cout <<arr[i]<<" ";
            }
    }
void reverse_array(int arr[],int n)
    {
            int start = 0;
            int end = n-1;
        while(start<=end)
            {
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
    }

int main()
    {
        int arr[6] = {6,5,4,3,2,1};
        int brr[8] = {1,2,3,4,5,6,7,8};

        reverse_array(arr,6);
        reverse_array(brr,8);

        print_array(arr,6);
        print_array(brr,8);



    }