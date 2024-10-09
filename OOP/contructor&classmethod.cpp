#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    list<string> course;
    float cg;
    student(string nm,int rl,float c){
        name=nm;
        roll=rl;
        cg=c;
    }
    void getinfo(){
        cout << "Name :" <<name << '\n';
        cout << "Roll :" << roll << '\n';
        cout << "CG :" << cg << '\n';
        cout << "courses :";
        for (auto it : course)
        {
            cout << it << " ";
        }
        cout << '\n';
    }
};
int main()
{
    student s1={"maya",25,3.35};
    // s1.name = "maya";
    // s1.roll = 25;
    // s1.cg = 3.35;
    // s1.course = {"CSE", "EEE", "MATH", "PHY"};
    s1.getinfo();
    // cout << "Name :" << s1.name << '\n';
    // cout << "Roll :" << s1.roll << '\n';
    // cout << "CG :" << s1.cg << '\n';
    // cout << "courses :";
    // for (auto it : s1.course)
    // {
    //     cout << it << " ";
    // }
    // cout << '\n';

    // student s2;
    // s2.name = "abcd";
    // s2.roll = 2;
    // s2.cg = 3.37;
    // s2.course = {"CSE", "EEE", "MATH", "PHY"};

    // cout << "Name :" << s2.name << '\n';
    // cout << "Roll :" << s2.roll << '\n';
    // cout << "CG :" << s2.cg << '\n';
    // cout << "courses :";
    // for (auto it : s2.course)
    // {
    //     cout << it << " ";
    // }
    // cout << '\n';
}