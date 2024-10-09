#include <bits/stdc++.h>
using namespace std;
class calculator
{
public:
    int a, b;
    void input()
    {
        cout << "enter 1st & 2nd number:" << '\n';
        cin >> a >> b;
    }
};

class sum : public calculator
{
private:
    void calculateSum()
    {
        input();
        cout << "a+b=" << a + b << '\n';
    }

public:
    void getSum()
    {
        calculateSum();
    }
};

class sub : public calculator
{
private:
    void calculateSub()
    {
        input();
        cout << "a-b=" << a - b << '\n';
    }

public:
    void getSub()
    {
        calculateSub();
    }
};
class mult : public calculator
{
private:
    void calculateMultiplication()
    {
        input();
        cout << "a*b=" << a * b << '\n';
    }

public:
    void getMultiplication()
    {
        calculateMultiplication();
    }
};
class divide : public calculator
{
private:
    void calculateDivide()
    {
        input();
        cout << "a/b=" << a / b << '\n';
    }

public:
    void getDivide()
    {
        calculateDivide();
    }
};

int main()
{
    int choice;
    string again;
    do
    {
        cout << "enter choice:\n"
             << "1.sum\n"
             << "2.sub\n"
             << "3.multiplication\n"
             << "4.divide\n\n";
        cin >> choice;
        if (choice == 1)
        {
            sum obj;
            obj.getSum();
        }
        else if (choice == 2)
        {
            sub ob;
            ob.getSub();
        }
        else if (choice == 3)
        {
            mult o;
            o.getMultiplication();
        }
        else if (choice == 4)
        {
            divide oo;
            oo.getDivide();
        }
        else
            cout << "Invalid case\n";
        cout << "Do you want to calculate again?\n";
        cin >> again;

    } while (again == "YES");
}
