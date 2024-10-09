#include <bits/stdc++.h>
#include <fstream>
#include <sstream>
#include<windows.h>
using namespace std;
class phoneBook
{
private:
    /* data */ string name, phone, adress;

public:
    phoneBook() : name(""), phone(""), adress("") {}
    void SetName(string name)
    {
        this->name = name;
    }
    void SetPhone(string phone)
    {
        this->phone = phone;
    }
    void SetAdress(string adress)
    {
        this->adress = adress;
    }
    string getName()
    {
        return name;
    }
    string getPhone()
    {
        return phone;
    }
    string getAdress()
    {
        return adress;
    }
};
void adNo(phoneBook ph)
{    system("cls");
    string name, phone, adress;
    cout << "Enter Name of User:";
    cin >> name;
    ph.SetName(name);
    cout << "Enter Phone Number:";
    cin >> phone;
    ph.SetPhone(phone);
    cout << "Enter Adress:";
    cin >> adress;
    ph.SetAdress(adress);

    ofstream outfile("Phone.txt", ios::app);
    if (!outfile)
    {
        cout << "Error.file cannot Open\n";
    }
    else
    {
        outfile << ph.getName() << " : " << ph.getPhone() << " : " << ph.getAdress() << " : " << '\n';
    }
    outfile.close();
    cout<<"Added successfully\n";
    Sleep(3000);
}

void searchNo(){
    string name;
    cout<<"Enter user name:";
    cin>>name;
    ifstream infile("Phone.txt");
    if(!infile){
        cout<<"error. file cannot open\n";
    }
    else {
        string line;
        bool found=false;
        while(getline(infile,line)){
            stringstream ss;
            ss<<line;

        }
    }
}

int main()
{
    phoneBook ph;
    bool exit = false;
    while (!exit)
    {    system("cls");
        cout << "Welcome to Phone Book management system\n1.Add number.\n2.Search number.\n3.exit\n\n\n\n";
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            adNo(ph);
        }
        else if(choice==2){

        }
        
    }
}