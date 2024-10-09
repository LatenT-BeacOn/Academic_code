#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

// Forward declarations
class Course;
class Student;
class Chairman;
class ExamController;

// Course Class
class Course
{
public:
    int courseID;
    string courseName;
    string instructorName;

    Course(int id, string name) : courseID(id), courseName(name), instructorName("") {}
};

// Student Class
class Student
{
private:
    int studentID;
    string name;
    vector<Course *> registeredCourses;
    map<int, char> grades; // Stores courseID and grade
    bool admitCardGenerated;

public:
    Student(int id, string name) : studentID(id), name(name), admitCardGenerated(false) {}

    void registerCourse(Course *course)
    {
        registeredCourses.push_back(course);
        cout << name << " registered for " << course->courseName << endl;
    }

    void dropCourse(int courseID)
    {
        for (auto it = registeredCourses.begin(); it != registeredCourses.end(); ++it)
        {
            if ((*it)->courseID == courseID)
            {
                cout << name << " dropped " << (*it)->courseName << endl;
                registeredCourses.erase(it);
                break;
            }
        }
    }

    void viewCourseSchedule()
    {
        cout << name << "'s Course Schedule:" << endl;
        for (Course *course : registeredCourses)
        {
            cout << " - " << course->courseName << " (Instructor: " << course->instructorName << ")" << endl;
        }
    }

    void downloadAdmitCard()
    {
        if (admitCardGenerated)
        {
            cout << "Admit Card downloaded for " << name << endl;
        }
        else
        {
            cout << "Admit Card not yet generated." << endl;
        }
    }

    void viewGrades()
    {
        cout << name << "'s Grades:" << endl;
        for (auto &entry : grades)
        {
            cout << "Course ID: " << entry.first << ", Grade: " << entry.second << endl;
        }
    }

    void receiveGrade(int courseID, char grade)
    {
        grades[courseID] = grade;
    }

    void setAdmitCardGenerated(bool status)
    {
        admitCardGenerated = status;
    }
};

// Chairman Class
class Chairman
{
private:
    string name;
    vector<Course> approvedCourses;

public:
    Chairman(string name) : name(name) {}

    void approveCourseOfferings(vector<Course> &courses)
    {
        approvedCourses = courses;
        cout << "Chairman " << name << " approved course offerings." << endl;
    }

    void assignInstructor(Course &course, string instructor)
    {
        course.instructorName = instructor;
        cout << "Instructor " << instructor << " assigned to " << course.courseName << endl;
    }

    void reviewStudentRegistrations(const vector<Student *> &students)
    {
        cout << "Reviewing student registrations:" << endl;
        for (Student *student : students)
        {
            student->viewCourseSchedule();
        }
    }
};

// Exam Controller Class
class ExamController
{
private:
    string name;
    map<int, string> examSchedule; // Stores courseID and exam date
    vector<Student *> students;

public:
    ExamController(string name) : name(name) {}

    void scheduleExams(vector<Course> &courses)
    {
        for (Course &course : courses)
        {
            examSchedule[course.courseID] = "2024-12-01"; // Example date
            cout << "Exam scheduled for " << course.courseName << " on " << examSchedule[course.courseID] << endl;
        }
    }

    void generateAdmitCards(vector<Student *> &studentsList)
    {
        students = studentsList;
        for (Student *student : students)
        {
            student->setAdmitCardGenerated(true);
        }
        cout << "Admit cards generated for all students." << endl;
    }

    void publishExamResults()
    {
        cout << "Exam results published." << endl;
        for (Student *student : students)
        {
            student->receiveGrade(101, 'A'); // Example grade for course 101
            student->receiveGrade(102, 'B'); // Example grade for course 102
        }
    }
};

// Main Function - Interaction Flow
int main()
{
    // Create Courses
    Course course1(101, "Mathematics");
    Course course2(102, "Physics");
    vector<Course> courses = {course1, course2};

    // Create Students
    Student student1(1, "John");
    Student student2(2, "Alice");

    // Create Chairman and approve courses
    Chairman chairman("Dr. Smith");
    chairman.approveCourseOfferings(courses);

    // Assign instructors
    chairman.assignInstructor(course1, "Prof. Johnson");
    chairman.assignInstructor(course2, "Prof. Williams");

    // Students register for courses
    student1.registerCourse(&course1);
    student1.registerCourse(&course2);
    student2.registerCourse(&course1);

    // Students view course schedules
    student1.viewCourseSchedule();
    student2.viewCourseSchedule();

    // Create ExamController and schedule exams
    ExamController examController("Mr. Brown");
    examController.scheduleExams(courses);

    // ExamController generates admit cards
    vector<Student *> students = {&student1, &student2};
    examController.generateAdmitCards(students);

    // Students download admit cards
    student1.downloadAdmitCard();
    student2.downloadAdmitCard();

    // ExamController publishes results
    examController.publishExamResults();

    // Students view grades
    student1.viewGrades();
    student2.viewGrades();

    return 0;
}
