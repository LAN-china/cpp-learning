#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;

struct Student
{
    string name;
    int age;
    double score;
};

void showMenu()
{
    cout << "===== Student System =====" << endl;
    cout << "1. Add student" << endl;
    cout << "2. Show all" << endl;
    cout << "3. Find student" << endl;
    cout << "4. Statistics" << endl;
    cout << "5. Delete student" << endl;
    cout << "0. Exit" << endl;
    cout << "Choose: ";
}

void addStudent(vector<Student> &students)
{
    Student s;

    cout << "Name: ";
    getline(cin >> ws, s.name);

    cout << "Age(1-120): ";
    while (!(cin >> s.age) || s.age < 1 || s.age > 120)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid. Age(1-120): ";
    }

    cout << "Score(0-100): ";
    while (!(cin >> s.score) || s.score < 0 || s.score > 100)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid. Score (0-100): ";
    }

    students.push_back(s);
    cout << "Added." << endl;
}

void showAll(const vector<Student> &students)
{
    if (students.empty())
    {
        cout << "No students yet." << endl;
    }
    else
    {
        for (size_t i = 0; i < students.size(); i++)
        {
            cout << i + 1 << "." << " Name: " << students[i].name
                 << ", Age: " << students[i].age
                 << ", Score: " << students[i].score << endl;
        }
    }
}

int findStudent(const vector<Student> &students, const string name)
{
    for (size_t i = 0; i < students.size(); i++)
    {
        if (students[i].name == name)
        {
            return i;
        }
    }
    return -1;
}

double averageScore(const vector<Student> &students)
{
    double sum = 0;
    for (const Student &s : students)
    {
        sum += s.score;
    }
    return sum / students.size();
}

int topIndex(const vector<Student> &students)
{
    int best = 0;
    for (size_t i = 1; i < students.size(); i++)
    {
        if (students[i].score > students[best].score)
        {
            best = i;
        }
    }
    return best;
}

void deleteStudent(vector<Student> &students)
{
    string name;
    cout << "Name to delete: ";
    getline(cin >> ws, name);

    int index = findStudent(students, name);
    if (index == -1)
    {
        cout << "Not found." << endl;
        return;
    }

    students.erase(students.begin() + index);
    cout << "Deleted." << endl;
}

void findAndShow(const vector<Student> &students)
{
    string name;
    cout << "Name to find: ";
    getline(cin >> ws, name);

    int index = findStudent(students, name);
    if (index == -1)
    {
        cout << "Not found." << endl;
    }
    else
    {
        cout << "Found: Name: " << students[index].name
             << ", Age: " << students[index].age
             << ", Score: " << students[index].score << endl;
    }
}

void showStatistics(const vector<Student> &students)
{
    if (students.empty())
    {
        cout << "Not students yet." << endl;
        return;
    }
    else
    {
        int top = topIndex(students);
        cout << "Total: " << students.size() << " students" << endl;
        cout << "Average score: " << averageScore(students) << endl;
        cout << "Top student: " << students[top].name
             << " (" << students[top].score << ")" << endl;
    }
}

int main()
{
    vector<Student> students;
    int choice;

    while (true)
    {
        showMenu();
        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter a number." << endl;
            continue;
        }

        switch (choice)
        {
        case 1:
            addStudent(students);
            break;
        case 2:
            showAll(students);
            break;
        case 3:
            findAndShow(students);
            break;
        case 4:
            showStatistics(students);
            break;
        case 5:
            deleteStudent(students);
            break;

        case 0:
            cout << "Bye!" << endl;
            return 0;
        default:
            cout << "Invalid choice." << endl;
        }
    }
}