#include <iostream>
using namespace std;

// int main(){
//     int a = 2;
//     int b = a+1;
//     if((a=3)==b){
//         cout<<a;
//     }
//     else{
//         cout<<a+1;
//     }
//     cin.get(); 

// }

void f(int i,int arr[],int n)
    {
        if (i >=(n/2))z return;
        swap(arr[i],arr[n-i-1]);
        return f(i+1,arr,n);
    }


int main()
    {   int n;
        cin >>n;
        int arr[n];
        for (int i = 0;i<n;i++)
            {
                cin>>arr[i];
            }
        f(0 ,arr,n);
        for(int i = 0;i<n;i++)
            cout<< arr[i]<<" ";
            
        
    }

