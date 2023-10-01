//sum of digits of agiven number
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter a number \n";
    cin>>n;
    int sum=0;
    while(n>0)
    {
       int last_digit=n%10;
       sum+=last_digit;
       n=n/10;
    }
    cout<<sum<<endl;
    return 0;
}
