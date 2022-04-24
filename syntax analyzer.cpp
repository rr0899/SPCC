#include<iostream>
using namespace std;
int main()
{
string a;
cout<<"Enter the expression to check its syntax: ";
cin>>a;
int i=0;
int k=1;
while(a[i]!='\0')
{
switch(a[i])
{
case '+': if(i==0)
k=0;
else if (a[i-1]>42 && a[i-1]<48)
k=0;
if (a[i+1]=='\0')
k=0;
break;
case '-': if(i==0)
k=0;
else if (a[i-1]>42 && a[i-1]<48)
k=0;
if (a[i+1]=='\0')
k=0;
break;
case '*': if(i==0)
k=0;
else if (a[i-1]>42 && a[i-1]<48)
k=0;
if (a[i+1]=='\0')
k=0;
break;
case '/': if(i==0)
k=0;
else if (a[i-1]>42 && a[i-1]<48)
k=0;
if (a[i+1]=='\0')
k=0;
break;
}
i++;
// cout<<k;
}
if (k==0)
cout<<"error";
else cout<<" correct";
}
