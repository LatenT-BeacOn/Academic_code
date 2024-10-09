#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    list<string> course;
    float cg;
    student(string nm, int rl, float c)
    {
        name = nm;
        roll = rl;
        cg = c;
    }
    void getinfo()

    {
        cout << "Name :" << name << '\n';
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
    student s1 = {"maya", 25, 3.35};
   
    s1.getinfo();
   
    
    
}