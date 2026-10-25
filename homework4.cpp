#include <iostream>
using namespace std;
#include <iomanip>
// int main()
// {
//     for(int i=1;i<=5;i++)
//     {
//         for(int j=1;j<=3;j++)
//         {
//             for(int k=1;k<=4;k++)
//             {
//                 cout <<"*";
//             }cout <<endl;
//         }cout<<endl;
//     }
//     return 0;
// }
// int main()
// {
//     int num=0;
//     cout <<"enter a positive integer "<<endl;
//     cin>>num;
//     while(num!=-1)
//     {
//         int reverse=0;
//         while(num>0)
//         {
//             int digit=num%10;
//             reverse=reverse*10+digit;
//             num=num/10;
//         }
//         cout <<"The reversed integer is "<<reverse<<endl;
//         cout <<"Enter next positive integer (-1 to end):";
//         cin>>num;
//     }
//     return 0;
// }
// int main()
// {
//     char op;
//     cout << "enter an arithmetic operator: " << endl;
//     cin >> op;
//     while (op != '$')
//     {
//         int fir = 0;
//         int sec = 0;
//         cout << "enter two integers " << endl;
//         cin >> fir >> sec;
//         switch (op)
//         {
//         case '+':
//             cout << fir << "+" << sec << "=" << fir + sec << endl;
//             break;

//         case '/':
//             if (sec == 0)
//                 cout << "error:cannot divide by zero." << endl;
//             else
//                 cout << fir << "/" << sec << "=" << fir / sec << endl;
//             break;

//         case '*':
//             cout << fir << "*" << sec << "=" << fir * sec << endl;
//             break;

//         case '%':
//             if (sec == 0)
//                 cout << "error:cannot remainder by zero. " << endl;
//             else
//                 cout << fir << "%" << sec << "=" << fir % sec << endl;
//             break;

//         case '-':
//             cout << fir << "-" << sec << "=" << fir - sec << endl;
//             break;

//         default:
//             cout << "invalid operator." << endl;
//         }
//         cout << "enter next arithmetic operator." << endl;
//         cin >> op;
//     }
//     return 0;
// }
// int main()
// {
//     int size = 0;
//     cout << "enter the size " << endl;
//     cin >> size;
//     while (size < 1 || size > 20)
//     {
//         cout << "invalid,enter again " << endl;
//         cin >> size;
//     }
//     for (int row = 1; row <= size; row++)
//     {
//         for (int col = 1; col <= size; col++)
//         {
//             if (row == 1 || row == size || col == 1 || col == size)
//                 cout << "* ";
//             else
//                 cout << "  ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// int main()
// {
//     int N=0;
//     cout <<"enter a positive integer N"<<endl;
//     cin>>N;
//     while(N<=0)
//     {
//         cout <<"error,enter again.";
//         cin>>N;
//     }
//     for (int num=2;num<=N;num++)
//     {
//         bool isprime=true;
//         for (int d=2;d<num;d++)
//         {
//             if(num%d==0)
//             {
//                 isprime=false;
//                 break;
//             }
              
//         }
//         if (isprime)
//           cout <<num<<" ";
//     }
//     return 0;
// }
int main()
{
    int num=0;
    double total=0;
    cout <<"enter product number."<<endl;
    cin>>num;
    while(num!=-1)
    {
        switch(num)
        {
            case 1:
            total=total+2.9;
            break;
            case 2:
            total=total+3.5;
            break;
            case 3:
            total+=5;
            break;
            case 4:
            total+=6.9;
            break;
            default:
            cout <<"invalid number."<<endl;
        }
        cout <<fixed<<setprecision(2);
        cout <<"total purchase: "<<total<<endl;
        cout <<"enter next product number(-1 to check-out)."<<endl;
        cin>>num;
    }
    cout <<"final purchase: "<<total<<endl;
    return 0;
}