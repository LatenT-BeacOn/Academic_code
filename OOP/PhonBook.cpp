#include <bits/stdc++.h>
#include <fstream>
#include <sstream>
#include <windows.h>
using namespace std;
class PhnBook
{
private:
    string name, id, adress;

public:
    PhnBook() : name(""), id(""), adress("") {}
    void setname(string name)
    {
        this->name = name;
    }
    void setnum(string id)
    {
        this->id = id;
    }
    void setadress(string adress)
    {
        this->adress = adress;
    }
    string getname()
    {
        return name;
    }
    string getnum()
    {
        return id;
    }
    string getadress()
    {
        return adress;
    }
};
void addnum(PhnBook ph)
{
    // system("cls");
    string name, number, adress;
    cout << "\tEnter Name:";
    cin >> name;
    ph.setname(name);
    cout << "\tEnter Number:";
    cin >> number;
    ph.setnum(number);
    cout << "\tEnter Adress:";
    cin >> adress;
    ph.setadress(adress);
    ofstream outfile("list.txt", ios::app);
    if (!outfile)
        cout << "Error :sorry file cannot open\n";
    else
    {
        outfile << "\t" << ph.getname() << " " << ph.getnum() << " " << ph.getadress() << '\n';
    }
    outfile.close();
    cout << "\t Added succesfully\n";

    // Sleep(3000);
}

void searchNum()
{
    // system("cls");
    string name;
    cout << "\t Enter Username:";
    cin >> name;

    ifstream infile("C:\\Users\\JM\\OneDrive\\Documents\\c c++\\OOP\\output\\input.txt");
    if (!infile)
        cout << "\t Error:File not open\n";
    else
    {
        string line;
        bool found = false;
        while (getline(infile, line))
        {
            stringstream ss;
            ss << line;
            string username, usernum, useraddress;
            char delimiter;
            ss >> username >> delimiter >> usernum >> delimiter >> useraddress;
            if (username == name)
            {
                found = true;
                cout << "\t" << username << " " << usernum << " " << useraddress;
            }
        }
        if (!found)
        {
            cout << "\tNotfound";
        }
    }
    infile.close();
    // Sleep(5000);
}

int main()
{
    PhnBook ph;
    bool exit = false;
    do
    {
        system("cls");
        cout << "\tWelcome to Phone Book management system\n\t1.Add number.\n\t2.Search number.\n\t3.exit\n\n";
        int choice;
        cin >> choice;

        if (choice == 1)
        {
            addnum(ph);
        }
        else if (choice == 2)
        {
            searchNum();
        }
        else if (choice == 3)
        {
            // system("cls");
            exit = true;
            // Sleep(3000);
        }
        //}
    } while (exit);
}