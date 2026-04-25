#include <iostream>
using namespace std;

class MaxHeap
{
public:
    int *arr;
    int index;
    int size;

    MaxHeap(int n)
    {
        arr = new int[n];
        size = n;
        index = 0;
    }

    void Heapify(int i)
    {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (arr[largest] < arr[left])
        {
            largest = left;
        }
        if (arr[largest] < arr[right])
        {
            largest = right;
        }
        if (largest == i)
        {
            return;
        }
        swap(arr[largest], arr[i]);
        Heapify(largest);
    }

    void insert(int value)
    {
        if (index == size)
        {
            cout << "Heap is overflow" << endl;
            return;
        }
        if (index == 0)
        {
            arr[index] = value;
            cout << arr[index] << ":Inserted in the heap" << endl;
            index++;
            return;
        }

        arr[index] = value;
        int i = index;
        index++;

        while (i > 0 && arr[i] > arr[(i - 1) / 2])
        {
            swap(arr[i], arr[(i - 1) / 2]);
            i = (i - 1) / 2;
        }

        cout << arr[i] << ":Inserted into maxheap\n";
    }

    void deleteHeap()
    {
        if (index == 0)
        {
            cout << "Heap Underflow" << endl;
            return;
        }
        if (index == 1)
        {
            cout << arr[0] << ":Deleted from Heap" << endl;
            index--;
            return;
        }

        index--;
        arr[0] = arr[index];
        cout << arr[0] << ":Deleted from Heap" << endl;

        Heapify(0);
    }

    void printHeap()
    {
        for (int i = 0; i < index; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    MaxHeap v(5);
    v.insert(5);
    v.insert(4);
    v.deleteHeap();
    v.printHeap();
}