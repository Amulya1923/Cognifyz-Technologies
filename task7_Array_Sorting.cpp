#include <iostream>

using namespace std;

void selectionSort(int arr[], int n, bool ascending)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minMaxIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if ((ascending && arr[j] < arr[minMaxIndex]) || (!ascending && arr[j] > arr[minMaxIndex]))
            {
                minMaxIndex = j;
            }
        }
        if (minMaxIndex != i)
        {
            // Swap the elements
            int temp = arr[i];
            arr[i] = arr[minMaxIndex];
            arr[minMaxIndex] = temp;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    char order;
    cout << "Enter 'a' for ascending order or 'd' for descending order: ";
    cin >> order;

    bool ascending = (order == 'a');

    selectionSort(arr, n, ascending);

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
