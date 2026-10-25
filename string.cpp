#include <iostream>
using namespace std;
#include <string>
// int main()
// {
//     string s="C++";
//     s=s+" is fun";
//     cout <<s<<endl;
//     cout <<s.size()<<endl;
//     cout <<s[4]<<endl;
// }
// int main()
// {
//     string s;
//     cout <<"enter one word"<<endl;
//     cin>>s;
//     int count=0;
//     for (char c:s)
//     {
//         if (c=='a')
//         {
//             count++;
//         }
//     }
//     cout <<"count of a: "<<count<<endl;
// }
// int main()
// {
//     int age;
//     string name;
//     cout <<"enter age "<<endl;
//     cin>>age;
//     cin.ignore();
//     cout <<"enter full name "<<endl;
//     getline(cin,name);
//     cout <<name<<", "
//     <<age<<endl;
//     return 0;
// }
// int main()
// {
//     string s;
//     getline(cin,s);
//     for (char &c:s)
//     {
//         if (c>='a'&&c<='z')
//         c=c-32;
//     }
//     cout <<s<<endl;
//     return 0;
// }
bool isPalindrome(const string &s)
{
    int start=0;
    int end=s.size()-1;
    while(start<end)
    {
        if (s[start]!=s[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    string words[3]={"level","hello","a"};
    for (int i=0;i<3;i++)
    {
        cout <<words[i]<<": "<<isPalindrome(words[i])<<endl;
    }
    return 0;
}
   