#include<iostream>
using namespace std;
void prime(int);
int main() {
int a,b,i;
cout<<"Enter two numbers: ";
cin>>a>>b;
cout<<"Prime Number is: ";
for(i=a+1;i<b;i++)
prime(i);
return 0;
}
void prime(int a)
{   int i,k=0;
    if(a>1)
    { 
        for(i=2;i*i<=a;i++)
        {
            if(a%i==0)
            {
                k=1;
            }
        }
        if(k==0)
        {
            cout<<a<<" ";
        }
    }
}