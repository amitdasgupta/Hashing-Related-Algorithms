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
/***********code to check weather two arrays have same set or not  brute  force method*/////////////
int main()
{
    int n,*arr1,*arr2,i,j=0,flag=1;
    cin>>n;
    arr1=new int[n];
    arr2=new int[n];
    for(i=0;i<n;i++)
        cin>>arr1[i];
    for(i=0;i<n;i++)
        cin>>arr2[i];
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    for(int i=0;i<n;i++)
        if(arr1[i]!=arr2[i])
    {
        flag=0;
    }
    if(flag)
        cout<<"yes";
    else
        cout<<"no";
}
