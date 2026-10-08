#include <iostream>
using namespace std;
#include <string>
 #include <ctime>
//  记得随机数头文件
int main()
{
    //统计猜的次数
    int count=0;
    // 添加随机种子
    srand ((unsigned int)time(NULL));
    int num=rand()%100+1;
    // cout <<"num="<<num<<endl;
    
    
    int gus=0;
    cout <<"enter num"<<endl;
    while(1)
    {
    cin>>gus;
    //这里写count统计次数
    count++;
    if (gus>num)
    {
        cout <<"too high"<<endl;

    }
else if (gus<num)
{
    cout <<"too low"<<endl;
}
else {
    cout <<"you win"<<endl;
    cout <<"times="<<count<<endl;
    break;}
    
}






    return 0;

}