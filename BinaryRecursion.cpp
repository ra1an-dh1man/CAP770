#include <iostream>
using namespace std;

int binarySearch(int arr[], int key, int s, int e) 
{
    if (e >= s) 
    {

    int mid = s + (e - s) / 2;

    if (arr[mid] == key)
        return mid;

    if (arr[mid] > key)
        return binarySearch(arr, key, s, mid - 1);
    else
        return binarySearch(arr, key, mid + 1, e);
}
return -1;
}

int main(void) {

    int n;
    cin>>n;
    int arr[n];

    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;
    
    cout<<binarySearch(arr, key, 0, n - 1);
}
