#include<bits/stdc++.h>
using namespace std;
class youtube{
       private:
       string channelname,ownnername;
       int subscribtion;
       list<string>videos;
       public:
       youtube(string channelname,string ownnername){
        this->channelname=channelname;
        this->ownnername=ownnername;
        subscribtion=0;

       }
       void getinfo(){
        cout<<"Name : "<<channelname<<"\n";
        cout<<"Ownnnername : "<<ownnername<<'\n';
        cout<<"Videos : ";
        for(string videos:videos){
            cout<<videos<<" ";
        }
       }

    void publishvideo(string s){
        videos.push_back(s);
    }

};



int main(){

    youtube ytbchannel("cpp","sarah");
    


}