#include<iostream>
using namespace std;
int main()
{
int a[5][5],i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<"enter value a["<<i<<"]["<<j<<"]:";
cin>>a[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<a[j][i]<<" ";
}
cout<<"\n" ;
  }
  return 0;
}