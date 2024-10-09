#include <bits/stdc++.h>
using namespace std;
class calculator
{
    // private:
    /* data */

public:
    int a, b;
    void input()
    {
        cout << "enter first & sceound number:" << '\n';
        cin >> a >> b;
    }
};

class sum : public calculator
{
private:
    // public:

    void calculatesum()
    {
        input();
        cout << "a+b=" << a + b << '\n';
    }

public:
    //   int total(){
    //     return a+b;
    //   }
    void getsum()
    {
        calculatesum();
    }
};
// class AVRAGE : public sum
// {
// private:
//     void calculateaverage()
//     {
//        int d= total();
//        cout<<"average="<<d/2<<'\n';

//     }

// public:
//     void getaverage()
//     {
//         calculateaverage();
//     }
// };

class sub : public calculator
{
private:
    void calculatesub()
    {
        input();
        cout << "a-b=" << a - b << '\n';
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
        cout << "a*b=" << a * b << '\n';
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
        cout << "a/b=" << a / b << '\n';
    }

public:
    void getsddivide()
    {
        calculatedivide();
    }
};

int main()
{   ofstream file;
file.open("fillle.txt");
    int choice;
    string again;
    do
    {
        cout << "enter choice:\n"
             << "1.sum\n"
             << "2.sub\n"
             << "3.multiplicatio\n"
             << "4.divide\n\n";
        cin >> choice;
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
        // else if(choice==5){
        //     AVRAGE AVE;
        //     AVE.getaverage();
        // }
        else
            cout << "Invalid case\n";
        cout << "Do you want to calculate again?\n";
        cin >> again;

    } while (again == "YES");
    file.close();
}
