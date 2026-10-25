#include <iostream>
using namespace std;
#include <string>
// 值传递与指针
//  void addten(int*p)
//  {
//      *p=*p+10;
//  }
//  int main()
//  {
//      int a=5;
//      addten(&a);
//      cout <<a<<endl;
//      return 0;
//  }
// int main()
//{
// int a = 10, b = 20;

// const int * p1 = &a;

// p1 = &b;

// int * const p2 = &a;
//*p2 = 100;

// const int * const p3 = &a;
// }
// 冒泡排序
void bubblesort(int *arr, int len) // len是长度 *arr为指针//排序函数
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
// 输出函数
void printarray(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[5] = {4, 2, 8, 0, 5};
    int len = sizeof(arr) / sizeof(arr[0]);

    cout << "before:";
    printarray(arr, len);

    bubblesort(arr, len);

    cout << "after:";
    printarray(arr, len);
    return 0;
}
