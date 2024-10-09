#include<bits/stdc++.h>
using namespace std;
class animal{
    public:
     string brain,spinalcord;
     void display(){
        cout<<brain<<" "<<spinalcord<<'\n';
     }
    //  void takebreath(){
    //     cout<<"........"<<"\n\n";
    //  }

};
class human:public animal
{ public:
    int sl;
    string name;
    void slvarithmticprblm(int x,int y){
        cout<<x+y<<"\n\n";
    }
    void dsa(){
        cout<<sl<<" "<<name<<'\n';
    }
};
class artist:public human{
    public:
      void canart(){
        cout<<"Can draw a map\n\n";
      }
};

class aves:public animal{
    public:
    int numwing;
    void countwing(){
        cout<<numwing<<" "<<'\n';
    }

};
int main(){
    artist afiya;
    
    afiya.sl=23;
    afiya.name="afiya";
    afiya.brain="righthandled";
    afiya.dsa();
    afiya.display();
    afiya.slvarithmticprblm(20,40);
    //afiya.takebreath();
    afiya.sl=21;
    afiya.canart();



    human h;
    h.brain="SHAR PBRAIN";
    h.sl=1;
    h.name="majkds";
    h.display();
    h.dsa();
    h.slvarithmticprblm(10, 20);

    aves a;
    a.brain="little brain";
    a.spinalcord="low";
    a.display();
    a.numwing=2;
    a.countwing();

}