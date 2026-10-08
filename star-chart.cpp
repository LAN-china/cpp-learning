#include <iostream>
using namespace std;
#include <string>
int main()
{//嵌套循环
    // for (int row=1;row<=3;row++)
    // {
    //     for(int col=1;col<=5;col++)
    //     {
    //         cout <<"*";
            

    //     }
    //     cout <<endl;//注意换行是放在外层循环里面
    // }
    //倒三角形
    // for (int row=1;row<=5;row++)
    // {
    //     for (int col=1;col<=6-row;col++)
    //     {
    //         cout <<"*";
    //     }
    //     cout <<endl;
    // }
    // for (int row=1;row<=5;row++)
    // {
    //     for (int col=1;col<=row;col++)
    //     {
    //         cout <<col;
    //     }
    //     cout <<endl;
    // }
    //乘法表
    // for (int row=1;row<=9;row++)
    // {
    //     for (int col=1;col<=row;col++)
    //     {
    //         cout <<col<<"*"<<row<<"="<<row*col<<"\t";
    //     }
    //     cout <<endl;
    // }
    //金字塔
    for (int row=1;row<=5;row++)
    {
        for (int i=1;i<=5-row;i++)//打印空格
        {
            cout <<" ";
        }
        for (int j=1;j<=2*row-1;j++)//打印*
        {
            cout <<"*";
        }
        cout <<endl;
    }


 
    






























  return 0;

}
