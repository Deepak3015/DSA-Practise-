#include <iostream>
using namespace std;

int main()
    {
        int a,b;
        cout<<"Enter your First Number :";
        cin>>a;

        cout<<"Enter your Second Number :";
        cin>>b;

        char op ;
        cout<<"Enter what operation you want to perform ==> + - / * ";
        cin>>op;
        switch (op)
            {
                case '+':cout <<(a+b)<<endl;
                    break;
                case '-':cout <<(a*b)<<endl;
                    break;
                case '/':cout <<double(a/b)<<endl;
                    break;
                case '*':cout <<(a*b)<<endl;
                    break;
                default : cout <<"Enter a valid Operation";
            }
    }