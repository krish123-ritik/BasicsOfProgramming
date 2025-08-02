#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    
    bool flag = true;

    if(num <= 1)
    {
        flag = false;
    }

    for(int i=2; i*i <= num; i++)
    {
        if(num % i == 0)
        {
            flag = false;
            break;
        }
    }

    if(flag)
    {
        cout<<num<<" Number is Prime"<<endl;
    }
    else
    {
        cout<<num<<" It's not prime"<<endl;
    }
    return 0;
}