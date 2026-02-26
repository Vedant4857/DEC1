#include <iostream>
#include<vector>
using namespace std;

void merge(int arr[],int low,int high,int mid){
  int s1 = (mid-low+1);
  int s2 = (high-mid);

  vector<int> v1(s1),v2(s2);

  for(int i = 0;i<s1;i++){
    v1[i] = arr[low + i];
  }
  for(int i = 0;i<s2;i++){
    v2[i] = arr[mid + 1 + i];
  }

  int i = 0, j = 0, k = low;
  while(i<s1 && j<s2){
    if(v1[i]<v2[j]){
      arr[k++] = v1[i++];
    }
    else{
      arr[k++] = v2[j++];
    }
  }
  while(i<s1){
    arr[k++] = v1[i++];
  }
  while(j<s2){
    arr[k++] = v2[j++];
  }
}

void mergesort(int arr[],int low,int high){
  if(low>=high) return;

  int mid = (low + high)/2;
  mergesort(arr,low,mid);
  mergesort(arr,mid+1,high);

  merge(arr,low,high,mid);
}
int main()
{
  int size = 10;
  int arr[size] = {51,31,75,98,24,65,23,48,0,4,85,78};
  mergesort(arr,0,size-1);

  for(int i =0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}