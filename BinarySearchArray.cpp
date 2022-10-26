#include <iostream>

using namespace std;

void binarySearch(int arr[], int n, int key)
{
    int l = 0;
    int h = n;
    int mid = (l + h) / 2;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr[mid])
        {
            cout << "Found at : " << mid;
            break;
        }
        else if (key > arr[mid])
        {
            l = mid + 1;
        }
        else if (key < arr[mid])
        {
            h = mid - 1;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the length of the array ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the key ";
    int key;
    cin >> key;

    binarySearch(arr, n, key);

    return 0;
}