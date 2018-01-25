#include <iostream>
#include<string>
#include<map>
#include<algorithm>
#define pp pair<char,int>
using namespace std;
void swapAndReduceSize(int * &arr,int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
/***********code to check weather two arrays have same set or not*/////////////
int main()
{
    int n,*arr1,*arr2,i,j=0,n2;
    cin>>n;
    arr1=new int[n];
    arr2=new int[n];
    for(i=0;i<n;i++)
        cin>>arr1[i];
    for(i=0;i<n;i++)
        cin>>arr2[i];
    i=0;
    n2=n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                swapAndReduceSize(arr2,j,n2-1);
                n2--;
            }
        }
    }
    if(n2==0)
        cout<<"yes";
    else
        cout<<"no";
    delete[] arr1;
    delete[] arr2;
}
