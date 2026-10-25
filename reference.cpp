#include <iostream>
using namespace std;
#include <string>
// int main()
// {
//     int a = 5;
//     int &r = a;
//     r = r * 2;
//     a = a + 1;
//     cout << a << " " << r << endl;
//     return 0;
// }
// void swap1(int a,int b)
// {
//     int temp=a;
//     a=b;
//     b=temp;
// }

// void swap2(int *a,int *b)
// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }

// void swap3(int &a,int &b)
// {
//     int temp=a;
//     a=b;
//     b=temp;
// }

// int main()
// {
//     int x=10,y=20;
//     swap1(x,y);
//     cout <<x<<" "<<y<<endl;
//     x=10,y=20;
//     swap2(&x,&y);
//     cout <<x<<" "<<y<<endl;
//     x=10,y=20;
//     swap3(x,y);
//     cout <<x<<" "<<y<<endl;
//     return 0;
// }
struct Student
{
    string name;
    int age;
    double score;
};
void printStudent(const Student &s)
{
        cout << "Name: " << s.name
             << ", Age: " << s.age
             << ", Score: " << s.score << endl;
}

void addBonus(Student &s)
{
    s.score = s.score + 5;
}

int main()
{
    Student students[3] =
        {
            {"Lan", 18, 92.5},
            {"Mike", 19, 80},
            {"Amy", 18, 78.5},
    };
     for (int i=0;i<3;i++)
     {
        addBonus(students[i]);
     }
     
     for (int i=0;i<3;i++)
     {
        printStudent(students[i]);
     }
     return 0;
}
