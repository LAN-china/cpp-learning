#include <iostream>
using namespace std;
#include <string>
#include <iomanip>
// int main()
// {
//     int a,b,c=0;
//     cout<<"enter three integer "<<endl;
//     cin>>a>>b>>c;
//     cout <<"sum is "<<a+b+c<<endl;
//     cout <<"product is "<<a*b*c<<endl;
//     cout <<fixed<<setprecision(2);
//     cout <<"average is "<<(a+b+c)/3.0<<endl;
// }
// int main()
// {
//     double Celsius=0;
//     double Fahrenheit=0;
//     cout <<"enter temperature in degree Celsius:"<<endl;
//     cin>>Celsius;
//     Fahrenheit=(9/5.0)*Celsius+32;
//     cout <<Celsius<<" degree Celsius="<<Fahrenheit<<" degree Fahrenheit"<<endl;
//     return 0;
// }
// int main()
// {
//     int num=0;
//     cout <<"enter a five-digit number "<<endl;
//     cin>>num;
//     int _1,_2,_3,_4,_5=0;
//     _1=num%10;
//     _2=num/10%10;
//     _3=num/100%10;
//     _4=num/1000%10;
//     _5=num/10000;
//     cout <<_5<<" "<<_4<<" "<<_3<<" "<<_2<<" "<<_1<<" ";
//     return 0;

// }
int main()
{
    double inch=0;
    double foot=0;
    double meters=0;
    cout <<"enter the meters "<<endl;
    cin>>meters;
    inch=meters/0.0254;
    foot=inch/12;
    cout <<meters<<" meters = "<<inch<<" inch"<<endl;
    cout <<meters<<" meters = "<<foot<<" foot"<<endl;
    return 0;
}