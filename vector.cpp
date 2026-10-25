#include <iostream>
#include <string>
#include <vector>
using namespace std;
// int main()
// {
//     vector<int>nums;
//     int n;
//     cout <<"How many numbers? ";
//     cin>>n;

//     for (int i=0;i<n;i++)
//     {
//         int x;
//         cin>>x;
//         nums.push_back(x);
//     }

//     for (int j=0;j<nums.size();j++)
//     {
//         cout <<nums[j]<<" ";
//     }
//     cout <<endl;
//     return 0;
//}

// int main()
// {
//     vector<int>nums;
//     int n;
//     cout <<"How many numbers? "<<endl;
//     cin>>n;

//     for (int i=0;i<n;i++)
//     {
//         int x;
//         cin>>x;
//         nums.push_back(x);
//     }

//     for (int x:nums)
//     {
//         cout<<x<<" ";
//     }
//     cout <<endl;

//     int sum=0;
//     for (int x:nums)
//     {
//         sum=sum+x;
//     }
//     cout <<"sum: "<<sum<<endl;

//     int maxNum=nums[0];
//     for (int x:nums)
//     {
//         if (x>maxNum)
//         {
//             maxNum=x;
//         }
//     }
//     cout <<"max: "<<maxNum<<endl;
// }

// int sumof(const vector<int>&v)
// {
//     int sum=0;
//     for (int x:v)
//     {
//         sum=sum+x;
//     }
//     return sum;
// }

// int maxof(const vector<int> &v)
// {
//     int maxNum=v[0];
//     for (int x:v)
//     {
//         if (x>maxNum)
//         {
//             maxNum=x;
//         }
//     }
//     return maxNum;
// }

// int main()
// {
//     vector<int>nums;
//     cout<< "How many numbers? "<<endl;
//     int n=0;
//     cin>>n;

//     for (int i=0;i<n;i++)
//     {
//         int x;
//         cin>>x;
//         nums.push_back(x);
//     }

//     cout <<"sum: "<<sumof(nums)<<endl;
//     cout <<"max: "<<maxof(nums)<<endl;

//     return 0;
// }

struct Student
{
    string name;
    int age;
    double score;
};

void printAll(const vector<Student> &students)
{
    for (const Student &s : students)
    {
        cout << "Name: " << s.name << ", Score: " << s.score << endl;
    }
}

void addBonusAll(vector<Student>&students)
{
    for (Student &s:students)
    {
        s.score+=5;
    }
}

int main()
{
    vector<Student>students;
    students.push_back({"Lan",18,92.5});
    students.push_back({"Mike",19,80.0});
    students.push_back({"Amy",18,78.5});

    printAll(students);
    addBonusAll(students);
    cout <<"---after bonus---"<<endl;
    printAll(students);

    return 0;
}

