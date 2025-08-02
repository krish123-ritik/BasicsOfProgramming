// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
//     int b = 20;
//     int c = 30;

//     int ans = max(a,b);
//     int ans2 = max(ans,c);

//     cout<<"Max is: "<<ans2<<endl;

//     return 0;
// }

//without using max function...
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a number a: ";
    cin>>a;

    cout<<"Enter a number b: ";
    cin>>b;

    cout<<"Enter a number c: ";
    cin>>c;

    if(a >= b && a >= c)
    {
        cout<<"Maximum NO. is: "<<a;
    }
    else if(b >= a && b >= c)
    {
        cout<<"Maximum NO. is: "<<b;
    }
    else
    {
        cout<<"Maximum NO. is: "<<c;
    }
}