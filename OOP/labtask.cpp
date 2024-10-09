#include <iostream>
#include <vector>
#include <string>
using namespace std;

class ExamController; 

class Student
{
public:
    int studentID;
    string name;
    vector<string> registeredCourses;
    vector<string> grades;
    string admitCard;

    Student(int id, string studentName) : studentID(id), name(studentName) {}

    void registerForCourses()
    {
        string course;
        cout << "Enter course to register: ";
        cin >> course;
        registeredCourses.push_back(course);
        cout << "Course " << course << " registered for student " << name << endl;
    }

    void viewCourseSchedule()
    {
        cout << "Course schedule for " << name << ":" << endl;
        if (registeredCourses.empty())
        {
            cout << "No courses registered." << endl;
        }
        else
        {
            for (const string &course : registeredCourses)
            {
                cout << "- " << course << endl;
            }
        }
    }

    void dropCourse()
    {
        string course;
        cout << "Enter course to drop: ";
        cin >> course;
        for (auto it = registeredCourses.begin(); it != registeredCourses.end(); ++it)
        {
            if (*it == course)
            {
                registeredCourses.erase(it);
                cout << "Course " << course << " dropped for student " << name << endl;
                return;
            }
        }
        cout << "Course not found!" << endl;
    }

    void downloadAdmitCard(ExamController &controller);

    void viewGrades()
    {
        cout << "Grades for " << name << ":" << endl;
        if (grades.empty())
        {
            cout << "No grades available." << endl;
        }
        else
        {
            for (const string &grade : grades)
            {
                cout << "- " << grade << endl;
            }
        }
    }
};


class Chairman
{
public:
    int chairmanID;
    string name;
    vector<string> approvedCourses;

    Chairman(int id, string chairmanName) : chairmanID(id), name(chairmanName) {}

    void approveCourseOfferings()
    {
        string course;
        cout << "Enter course to approve: ";
        cin >> course;
        approvedCourses.push_back(course);
        cout << "Chairman " << name << " approved the course " << course << endl;
    }

    void assignInstructors()
    {
        string course, instructor;
        cout << "Enter course to assign instructor: ";
        cin >> course;
        cout << "Enter instructor name: ";
        cin >> instructor;
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

class ExamController
{
public:
    int controllerID;
    vector<string> examSchedule;

    ExamController(int id) : controllerID(id) {}

    void scheduleExams()
    {
        string course;
        cout << "Enter course to schedule exam: ";
        cin >> course;
        examSchedule.push_back(course);
        cout << "Exam for " << course << " scheduled by Exam Controller " << controllerID << endl;
    }

    void generateAdmitCard(Student &student)
    {
        student.admitCard = "Admit Card for " + student.name + " (ID: " + to_string(student.studentID) + ")";
        cout << "Admit card generated for student " << student.name << endl;
    }

    void publishExamResults(Student &student)
    {
        string grade;
        cout << "Enter grade for student " << student.name << ": ";
        cin >> grade;
        student.grades.push_back(grade);
        cout << "Exam result for student " << student.name << ": " << grade << endl;
    }
};


void Student::downloadAdmitCard(ExamController &controller)
{
    controller.generateAdmitCard(*this);
    cout << "Downloading admit card: " << admitCard << endl;
}

int main()
{
    
    int studentID, chairmanID;
    cout << "Enter Student ID: ";
    cin >> studentID;
    string studentName;
    cout << "Enter Student Name: ";
    cin >> studentName;
    Student student1(studentID, studentName);

    cout << "Enter Chairman ID: ";
    cin >> chairmanID;
    string chairmanName;
    cout << "Enter Chairman Name: ";
    cin >> chairmanName;
    Chairman chairman1(chairmanID, chairmanName);

    int controllerID = 1001;
    ExamController examController1(controllerID);

    int choice;
    while (true)
    {
        cout << "\nMenu:\n";
        cout << "1. Chairman Approve Course Offerings\n";
        cout << "2. Student Register for Courses\n";
        cout << "3. Student View Course Schedule\n";
        cout << "4. Student Drop Course\n";
        cout << "5. Chairman Review Student Registrations\n";
        cout << "6. Exam Controller Schedule Exams\n";
        cout << "7. Student Download Admit Card\n";
        cout << "8. Exam Controller Publish Exam Results\n";
        cout << "9. Student View Grades\n";
        cout << "10. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            chairman1.approveCourseOfferings();
            break;
        case 2:
            student1.registerForCourses();
            break;
        case 3:
            student1.viewCourseSchedule();
            break;
        case 4:
            student1.dropCourse();
            break;
        case 5:
            chairman1.reviewStudentRegistrations(student1);
            break;
        case 6:
            examController1.scheduleExams();
            break;
        case 7:
            student1.downloadAdmitCard(examController1);
            break;
        case 8:
            examController1.publishExamResults(student1);
            break;
        case 9:
            student1.viewGrades();
            break;
        case 10:
            cout << "Exiting program." << endl;
            return 0;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}