#include <iostream>
using namespace std;
#include <string>
struct Student
{
    string name;
    int age;
    double score;
};



void printStudent(Student students)
 {
    cout <<"Name: "<<students.name
    <<" ,Age: "<<students.age
   <<" ,Score: "<<students.score<<endl;
 }
// int main()
// {
//     for (int i=0;i<3;i++)
//     {
//         printStudent(s[i]);
//     }
//  return 0;
// }
// void addBonusWrong(Student s)
// {
//     s.score=s.score+5;
// }

// int main()
// {
//     addBonusWrong(s[0]);
//     cout <<s[0].score<<endl;
// }
// void addBonus(Student *p)
// {
//     p->score=p->score+5;
// }

// int main()
// {
//     Student s[3]=
// {
//     {"Lan",18,92.5},
//     {"Mike",19,80.0},
//     {"Amy",18,78.5},
// };
//     for (int i=0;i<3;i++)
//     {
//         addBonus(&s[i]);
//     }
    
//     for (int j=0;j<3;j++)
//     {
//         printStudent(s[j]);
//     }
//     return 0;
// }
int findtop(Student*students,int len)
{
    int maxindex=0;
    for (int i=1;i<len;i++)
    {
        if(students[i].score>students[maxindex].score)
        {
            maxindex=i;
        }
    }
    return maxindex;
}
// int main()
// {
//     Student students[3]=
// {
//     {"Lan",18,92.5},
//     {"Mike",19,80.0},
//     {"Amy",18,78.5},
// };
// int top=findtop(students,3);
// cout <<"top: "<<students[top].name<<endl;
// return 0;
// }
double average(Student*students,int count)
{
    double sum=0;
    for (int i=0;i<count;i++)
    {
        sum=sum+students[i].score;
    }
    return sum/count;
}
int main()
{
     Student students[3]=
{
    {"Lan",18,92.5},
    {"Mike",19,80.0},
    {"Amy",18,78.5},
};
    double avg=average(students,3);
    cout <<"average= "<<avg<<endl;
    for (int i=0;i<3;i++)
    {
        if (students[i].score<avg)
        {
            cout <<students[i].name<<endl;
        }
    }
    return 0;
}