#include <iostream>
using namespace std;

void swapVal(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void heapify(int arr[], int i, int n)
{
    while (true)
    {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && arr[left] > arr[largest])
            largest = left;

        if (right < n && arr[right] > arr[largest])
            largest = right;

        if (largest != i)
        {
            swapVal(arr[i], arr[largest]);
            i = largest; // move down
        }
        else
        {
            break;
        }
    }
}

void buildMaxHeap(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, i, n);
    }
}

void heapsort(int arr[], int N)
{
    for (int i = N - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, 0, i);
    }
}
int main()
{
    int arr[] = {10, 15, 18, 30, 17, 26, 48, 6, 8, 19};
    int n = sizeof(arr) / sizeof(arr[0]);

    buildMaxHeap(arr, n);
    heapsort(arr, 10);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}