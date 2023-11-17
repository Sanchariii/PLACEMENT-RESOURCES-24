#include <iostream>
#include <vector>

using namespace std;

void revArr(vector<int> &arr, int start, int end)
{
    if (start >= end)
        return;
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    revArr(arr, start + 1, end - 1);
}

int main()
{
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    vector<int>arr(n);
    cout << "Enter the elements you want in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Reverse the array
    revArr(arr, 0, n - 1);

    cout << "Reversed Array is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
