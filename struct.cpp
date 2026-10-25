#include <iostream>
using namespace std;
#include <string>
#include <iomanip>

struct Student
{
    string name;
    int age;
    double score;
};

// int main()
// {
//     Student s1;
//     s1.name="Lan";
//     s1.age=18;
//     s1.score=92.5;
//     cout <<"Name: "<<s1.name
//     <<",Age: "<<s1.age
//     <<",Score: "<<s1.score<<endl;
//     return 0;
// }
// int main()
// {
//     Student s[3] = 
//     {
//         {"Lan", 18, 92.5},
//         {"Mike", 19, 85.0},
//         {"Amy", 18, 78.5},
//     };
//     for(int i=0;i<3;i++)
//     {
//         cout <<"Name: "<<s[i].name
//         <<", "<<"Age: "<<s[i].age
//         <<", "<<"Score: "<<s[i].score<<endl;
//     }
// }
int main()
{
    Student s[3]=
    {
        {"Lan",18,70.0},
        {"Mike",19,95.0},
        {"Amy",18,80.0},
    };
    double sum=0;
    for(int i=0;i<3;i++)
    {
        sum=s[i].score+sum;
    }
    double average=sum/3;
    cout <<"average= "<<average<<endl;
    
    int maxindex=0;
    for (int i=1;i<3;i++)
    {
        if (s[i].score>s[maxindex].score)
        {
            maxindex=i;
        }
    }
    cout <<"top student: "<<s[maxindex].name
    <<", score: "<<s[maxindex].score<<endl;
    
    return 0;
}

