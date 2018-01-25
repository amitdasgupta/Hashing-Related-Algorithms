#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
/***********brute force method to remove duplicates from string*/////////////
int main()
{
    string a;
    int n;
    cin>>a;
    n=a.size();
    int i=0,j=0;
    for(i=0;i<n-1;i++)
    {
        j=i+1;
        while(j<n)
        {
            if(a[i]==a[j])
            {
                a[j]=a[n-1];
                n--;
            }
            else
                j++;
        }
    }
    a.resize(n);
    cout<<a;

}
