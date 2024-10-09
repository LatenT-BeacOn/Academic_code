#include <bits/stdc++.h>
#include <fstream>
#include <sstream>
using namespace std;
class phoneBook
{
private:
    /* data */ string name, phone, adress;

public:
    phoneBook() : name(""), phone(""), adress("") {}
    void SetName(string name)
    {
        this->name= name;
    }
    void SetPhone(string phone)
    {
        this->phone = phone;
    }
    void SetAdress(string adress)
    {
        this->adress = adress;
    }
    string getName(){
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
 void adNo(phoneBook ph){
   string name,phone,adress;
   cout<<"Enter Name of User:\n";
   cin>>name;
   ph.SetName(name);
   cout<<"Enter Phone Number:\n";
   cin>>phone;
   ph.SetPhone(phone);
   cout<<"Enter Adress:\n";
   cin>>adress;
   ph.SetAdress(adress);

   ofstream outfile("PhoneBook.txt",ios::app);
   if(!outfile){
    cout<<"Error.file cannot Open\n";
   }
   else{
    outfile<<ph.getName()<<" : "<<ph.getPhone()<<" : "<<ph.getAdress()<<" : "<<'\n';
   }
   outfile.close();

}

int main()
{
    phoneBook ph;
    bool exit=false;
    while(!exit){
        cout<<"Welcome to Phone Book management system\n1.Add number.\n2.Search number.\n3.exit\n\n\n\n";
        int choice;
        cin>>choice;
        if(choice==1){
            adNo(ph);
        }
        
        
    }
}