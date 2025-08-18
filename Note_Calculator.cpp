#include<iostream>
using namespace std;

int main ()
    {
        int currency;
        cout<<"Enter the ammount you want to check :";
        cin>>currency;
        int n100,n50,n20,n1;

        switch (1)
        {
        case 1:
            n100 = currency/100;
            currency = currency%100;
            cout<<"!00 Notes :"<<n100<<endl;
        case 2:
            n50 = currency/50;
            currency = currency%50;
            cout<<"50 Notes :"<<n50<<endl;
        case 3:
            n20 = currency/20;
            currency = currency%20;
            cout<<"20 Notes :"<<n20<<endl;
        case 4:
            n1 = currency/1;
            currency = currency%1;
            cout<<"1 Notes :"<<n1<<endl;
            break;

        }
        return 0;
    }