#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name, ID;
    vector<string> registercourses;
    vector<string> grades;

    void registercourse()
    {
        cout << "enter coures for register :";
        string course;
        cin >> course;
        registercourses.push_back(course);
    }
    void viewCourseSchedule()
    {
        if (registercourses.empty())
            cout << "NO course register\n";
        else
        {
            for (const string &course : registercourses)
            {
                cout << course << endl;
            }
        }
    }
    void dropCourses()
    {
        string course;
        cout << "Enter course to drop: ";
        cin >> course;
        for (auto it = registercourses.begin(); it != registercourses.end(); it++)
        {
            if (*it == course)
            {
                registercourses.erase(it);
                cout << "Course " << course << " dropped for student " << name << endl;
                return;
            }
        }
        cout << "Course not found!" << endl;
    }

    void DownloadAdmitCard()
    {
    }
    // void grades()
    // {
    //     cout << "Grades for " << name << ":" << endl;
    //     if (grades.empty())
    //     {
    //         cout << "No grades available." << endl;
    //     }
    //     else
    //     {
    //         for (const string &grade : grades)
    //         {
    //             cout << "- " << grade << endl;
    //         }
    //     }
    // }
};

class chairman
{
public:
    int chairmanID;
    string name;
    vector<string> approvedCourses;
    void approveCourseOfferings()
    {
        string course;
        cin >> course;
        approvedCourses.push_back(course);
        cout << "Chairman " << name << "Approved for" << course << '\n';
    }

    void assignInstructor()
    {
        string course, instructor;
        cin >> course >> instructor;
        cout << "Chairman " << name << " assigned " << instructor << " to course " << course << endl;
    }

    void reviewStudentRegistrations(Student &student)
    {
        cout << "Chairman " << name << " is reviewing registrations for " << student.name << endl;
        student.viewCourseSchedule();
    }

    void generateReports()
    {
        cout << "Chairman " << name << " is generating reports..." << endl;
    }
};
class controller
{
public:
    int controllerID;
    void schaduleExame()
    {
    }
    void generateAdmitCard()
    {
    }
    void publishExamResult(Student &student)
    {

        string grade;
        cout << "Enter grade for student " << student.name << ": ";
        cin >> grade;
        student.grades.push_back(grade);
        cout << "Exam result for student " << student.name << ": " << grade << endl;
    }
};

int main()
{
}