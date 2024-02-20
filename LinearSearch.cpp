#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }

    int find;
    cin>>find;

    bool res = false;

    for(int i = 0 ; i<n; i++)
    {
        if(arr[i] == find)
        {
            res = true;
            break;
        }
    }

    if(res == true)
        cout<<"Element is present in the Array.";
    else
        cout<<"Element is not present in the Array.";
return 0;
}
