#include<bits/stdc++.h>
using namespace std;
class bank
{
    public:
    int code;string address;
    void manages(){
        
    }
    void maintain(){

    }

};

class ATM :public bank
{
    public:
    string location,manage_by;
    void transaction(){

    }
    void identifies(){

    }

    
};

class debit_card :public bank{
    public:
    int credit;
    string owned_by;
    void access_to(){

    }


};
class customer: public bank
{
public:
   
    string name ,address, DOB,UID;
    void owns()
    {
    }
};

class ATM_Transaction : public ATM
{
public:
   
    string Transaction_ID,data, type;
    void UpDate()
    {
    }
};
class account
{
    public:
    string type,Owner;
    void check_balance(){

    }
};

class savings:public account{
    string account_id;
    void debit(){}
    void credit(){

    }
};
class current : public account
{
    string account_id;
    void debit() {}
    void credit()
    {
    }
};
int main(){
    
  
    
}