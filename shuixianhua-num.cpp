#include <iostream>
using namespace std;
#include <string>
int main()
{//一个三位数 每个位上的数字的三次幂之和等于它本身
    //用do while我自己用while
    //输出三位数
    int num=100;
    while(num<1000)
    {
        int a=0;//个位
        int b=0;//十位
        int c=0;//百位
        a=num%10;
        b=num/10%10;
        c=num/100;
        if (num==a*a*a+b*b*b+c*c*c)
        {
            cout <<num<<endl;
        
        }
        num++;
    }
    return 0;
}