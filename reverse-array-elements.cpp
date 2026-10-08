#include <iostream>
using namespace std;
#include <string>
int main()
{
//  int arr[6]={1,2,3,4,5,6};
//  cout <<"before:"<<endl;
//  for (int i=0;i<6;i++)
//  {
//     cout <<arr[i]<<endl;
//  }
//  int start=0;//起始下标
//  int end=sizeof(arr)/sizeof(arr[0])-1;//结束下标

//  while (start<end)
//  {
//     int temp=arr[start];
//     arr[start]=arr[end];
//     arr[end]=temp;
//     start++;
//     end--;
//  }
//  cout <<"after:"<<endl;
//  for (int w=0;w<6;w++)
//  {
//     cout <<arr[w];
//     cout <<endl;
//  }
  //冒泡排序
  int arr[]={3,3,1,2,2};
  for(int w=0;w<4;w++)
  {for (int j=0;j<4;j++)
  {
    if (arr[j]>arr[j+1])
    {
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }
  }
    
  }
  for (int i=0;i<5;i++)
  {
    cout <<arr[i]<<" ";
  }


    return 0;
}