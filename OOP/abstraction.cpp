#include <bits/stdc++.h>
using namespace std;
class student
{
public:
     void save(){
        cout<<"save\n";
     }
    virtual void sendmassge() = 0;
};
class a : public student
{
public:
    void sendmassge()
    {
        cout << "HELLO!!" << '\n';
    }
};
class b : public student
{
public:
    void sendmassge()
    {
        cout << "HII!!" << '\n';
    }
};

int main()
{
    student *m;
    m->save();
    a atik;
    b asik;
    m= &atik;
    // m=&asik;
    m->sendmassge();
    m = &asik;
    m->sendmassge();
}