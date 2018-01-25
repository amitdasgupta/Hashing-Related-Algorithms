#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
void printArray(int *arr,int n)
{

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
/***********sorting method to remove duplicates from string*/////////////
int main()
{

    string a;
    int n;
    cin>>a;
    n=a.size();
    /**********code for sorting the array*/
    int *arr=new int[n],arr2[1000];
    for(int i=0;i<n;i++)
    {
        arr[i]=a[i];
    }
    sort(arr,arr+n);
    arr2[0]=arr[0];
    int j=0,i=1;
    while(i<=n)
    {
        if(arr[i]==arr2[j])
        {
            i++;
        }
        else
        {
            arr2[++j]=arr[i];
            i++;
        }
    }
    a.clear();
    for(int i=j-1;i>=0;i--)
        a.push_back(char(arr2[i]));
    cout<<a;
    delete[] arr;

}
