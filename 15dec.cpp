#include <iostream>
using namespace std;

int main()
{
  // 5 students, stor ethe marks of  5 students
  // int marks1 = 70, marks2 = 40,marks3 = 20, marks4 = 48, marks5 = 90;
  // cout<<marks1<<endl;
  // cout<<marks2<<endl;
  // cout<<marks3<<endl;
  // cout<<marks4<<endl;
  // cout<<marks5<<endl;

  // for 100 studnets store their marks

  // int marks[5] = {70,40,20,48,90};

  // for (int i = 0; i <5; i++)
  // {
  //   cout<<marks[i]<<endl;
  // }

  // int arr[3] ={1};

  // // arr[0] = 6;
  // // arr[1] = 5;
  // // arr[2] = 9;

  // for (int i = 0; i <3; i++)
  // {
  //   cout<<arr[i]<<endl;
  // }

  // array, index why start with zero?
  // int arr[10];

  // int n;
  // cout<<"Enter size of an array?";
  // cin>>n;
  // int arr[n];

  // cout<<"Enter the elements in th e array?";
  
  // for (int i = 0; i < n; i++)
  // {
  //   cin>>arr[i];
  // }
  
  // for (int i = 0; i < n; i++)
  // {
  //   cout<<arr[i]<<endl;
  // }

  int marks[5] = {70,40,20,48,90};
  // int sum = 0;
  //  for (int i = 0; i < 5; i++)
  //  {
  //   sum += marks[i];
  //  }

  //  cout<<sum/5;

  // for (int i = 0; i < 5; i++)
  // {
  //   cout<<&marks[i]<<endl;
  // }

  // Highest marks??
  // int max = marks[0];
  // int index =0;

  // for (int i = 0; i < 5; i++)
  // {
  //   if(marks[i]>max){
  //     max = marks[i];
  //     index = i;
  //   }
  // }
  // cout<<max<<endl;
  // cout<<index;

  // linear search
  int search = 50;
  for (int i = 0; i < 5; i++)
  {
    if(marks[i]==search){
      cout<<"Found at index:"<<i;
      return 0;
    }
  }
  cout<<"Not found";
  
  
   
  
  



  return 0;
}
