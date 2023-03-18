#include<bits/stdc++.h>
using namespace std;
void print(int i, int n)
{
    if(i<1)return;
    print(i-1,n); // when you want to print the last data very first then put that part after the recursion call. 
    cout<<i<<" ";
}
int main()
{
    int n;cin>>n;
    print(n,n);
}