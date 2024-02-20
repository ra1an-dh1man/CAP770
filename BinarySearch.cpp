#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;

    while(start <= end)
    {
        if(key == arr[mid])
            return mid;
        
        else if(key > arr[mid])
            start = mid + 1;
        
        else if(key < arr[mid])
            end = mid - 1;

        mid = start + (end - start) / 2;

    }
    return -1;
};
int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i = 0 ; i < n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;

    int res = BinarySearch(arr, n, key);

    cout<<"Index of the key is -> " << res;

return 0;
}
