#include<bits/stdc++.h>
using namespace std;
class youtube
{
    private:
       string name,owennername;
       int subscribtion;

    public:   
       youtube(string name,string owennername){
        // name=name;
        // owennername=owennername;
        this->name=name;
        this->owennername=owennername;
        subscribtion=0;
       }

       void getinfo(){
        cout<<name<<" "<<owennername<<" "<<subscribtion<<'\n';
       }

    void subscribe(){
        subscribtion++;

    }
    void unsubscribe(){
        if(subscribtion>0)
        subscribtion--;
    }





};

int main(){

    youtube channel("learnoOOP","SARAH");
    channel.subscribe();
    channel.subscribe();
    channel.subscribe();
    channel.getinfo();

}