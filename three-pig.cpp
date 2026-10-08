#include <iostream>
using namespace std;
#include <string>
int main()
{
int a=0;
int b=0;
int c=0;
cout<<"enter a"<<endl;
cin>>a;
cout<<"enter b"<<endl;
cin>>b;
cout <<"enter c"<<endl;
cin>>c;
if (a>b)
{
  if (a>c)
  {
    cout <<"a"<<endl;
  }  
  else {
    cout<<"c"<<endl;
  }
}
else {
    if (b<c)
    {
        cout <<"c"<<endl;
    }
    else {
        cout <<"b"<<endl;
    }
}




return 0;
}
