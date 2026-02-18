#include <iostream>
using namespace std;

void swap(int *a,int * b){
  int temp = *a;
  *a = *b;
  *b = temp;
}
int partition(int arr[], int low, int high){
  int pivot = arr[high];
  int i = low-1, j = low;
  while(j<high){
    if(arr[j]<pivot){
      i++;
      swap(&arr[i],&arr[j]);
    }
    j++;
  }
  i++;
  swap(&arr[i],&arr[high]);
  return i;
}
void quicksort(int arr[],int low,int high){
  if(low<high){
    int p = partition(arr,low,high);

    quicksort(arr,low,p-1);
    quicksort(arr,p+1,high);
  }
}
int main()
{
  int size = 10;
  int arr[size] = {51,31,75,98,24,65,23,48,0,4};
  quicksort(arr,0,size-1);

  for(int i =0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}