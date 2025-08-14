// #include<iostream>
// using namespace std;

// int main()
// {   
//     int n;
//     cin >> n;
//     int a = 0;
//     int b = 1;

//     cout << "The Number of Series Is: " << a << " " << b;  // print first two terms

//     int sum;
//     for(int i = 1; i <= n - 2; i++)  // already printed 2 numbers
//     {
//         sum = a + b;
//         cout << " " << sum;  // print next term
//         a = b;
//         b = sum;
//     }
// }

#include <iostream>
using namespace std;

int main()
    {
        int n ;
        cin>>n;
        bool isprime= 1;
        for(int i = 2 ;i<n;i++)
            {
                if(n%i==0)
                    {
                        isprime = 0;
                        break;
                        
                    }
            }
        if(isprime == 1)
            {
                cout<<n<<" "<<"Is Prime.";
            }
        else
            {
                cout<<"Not Prime.";
            }

    }
