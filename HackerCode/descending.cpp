#include<iostream>
using namespace std;
int main()
{
int a[100], n, i, j, temp;
cin>>n;
for(i=0; i< n; i++)
cin>>a[i];
for( i=0; i< n; i++)
{
for(j=i; j< n-1; j++)
{
if(a[i]< a[j+1] )
{
temp= a[i];
a[i]= a[j+1];
a[j+1]= temp;
}
}
}

cout<<"Elements after sorting in descending is:";
for( i=0; i< n; i++)
cout<<a[i];
return 0;
}