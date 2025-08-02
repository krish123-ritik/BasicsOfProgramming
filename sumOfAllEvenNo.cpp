#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    cout<<"Enter a number: ";
    cin>>n;

    int sum = 0;

    for(int i=1; i<=n; i++)
    {
        if(i % 2 == 0)
        {
            sum = i + sum;
        }
    }

    cout<<"Sum is: "<<sum<<endl;
    return 0;
}