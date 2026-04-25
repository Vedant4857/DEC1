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
};
int main()
{
    MaxHeap v(5);
    v.insert(5);
    v.insert(4);
}