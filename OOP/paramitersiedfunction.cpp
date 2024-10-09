#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int id;
    double cg;
    void display()
    {
        cout << id << " " << cg << '\n';
    }

    void setvalue(int x,int y){
        id=x;
        cg=y;
    }
};
int main()
{

    student atik, asik;
    // atik.id = 11; // class er variable guleke usleable (objectname.class_variable);
    // atik.cg = 3.00;
    // asik.id = 02;
    // asik.cg = 3.35;
    atik.setvalue(11,3.00);
    asik.setvalue(2,3.35);
    atik.display();
    asik.display();
    // cout << atik.id << " " << atik.cg << " " << asik.id << " " << asik.cg << '\n';
}