#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    list<string> course;
    float cg;
};
int main()
{
    student s1;
    s1.name="abc";
    s1.roll=1;
    s1.cg=3.35;
    s1.course={"CSE","EEE","MATH","PHY"};


   cout<<"Name :"<<s1.name<<'\n';
   cout << "Roll :" << s1.roll << '\n';
   cout << "CG :" << s1.cg << '\n';
   cout << "courses :";
   for(auto it:s1.course){
    cout<<it<<" ";
   }
   cout<<'\n';
}