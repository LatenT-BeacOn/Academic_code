#include <bits/stdc++.h>
using namespace std;
ofstream fout("C:/Users/JM/OneDrive/Documents/c c++/OOP/outputproject..txt");
ifstream fin("C:/Users/JM/OneDrive/Documents/c c++/OOP/inputproject.txt");
class calculator
{
public:
    int a, b;
    void input()
    {
        fout << "enter first & sceound number:" << '\n';
        fin >> a >> b;
    }
};

class sum : public calculator
{
private:
    void calculatesum()
    {
        input();
        fout << "a=" << a << endl
             << "b=" << b << endl;
        fout << "a+b=" << a + b << '\n';
    }

public:
    void getsum()
    {
        calculatesum();
    }
};

class sub : public calculator
{
private:
    void calculatesub()
    {
        input();
        fout << "a=" << a << endl
             << "b=" << b << endl;
        fout << "a-b=" << a - b << '\n';
    }

public:
    void getsub()
    {
        calculatesub();
    }
};
class mult : public calculator
{
private:
    void calculatemultpliction()
    {
        input();
        fout << "a=" << a << endl
             << "b=" << b << endl;
        fout << "a*b=" << a * b << '\n';
    }

public:
    void getsumultilicatiom()
    {
        calculatemultpliction();
    }
};
class divide : public calculator
{
private:
    void calculatedivide()
    {
        input();
        fout << "a=" << a << endl
             << "b=" << b << endl;
        fout << "a/b=" << a / b << '\n';
    }

public:
    void getsddivide()
    {
        calculatedivide();
    }
};

int main()
{
    int choice;
    string again;
    do
    {
        fout << "enter choice:\n"
             << "1.sum\n"
             << "2.sub\n"
             << "3.multiplicatio\n"
             << "4.divide\n\n";
        fin >> choice;
        if (choice == 1)
        {
            sum obj;
            obj.getsum();
        }
        else if (choice == 2)
        {
            sub ob;
            ob.getsub();
        }
        else if (choice == 3)
        {
            mult o;
            o.getsumultilicatiom();
        }
        else if (choice == 4)
        {
            divide oo;
            oo.getsddivide();
        }
        else
            fout << "Invalid case\n";
        fout << "Do you want to calculate again?\n";
        fin >> again;

    } while (again == "YES");
}