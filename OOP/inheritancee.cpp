#include<bits/stdc++.h>
using namespace std;
class shape{
       public:
       int h,l;
    //    shape(int ,int l){
       shape(int x, int y)
       {
           h=x;l=y;
           // this->h=h;
           // this->l=l;
       }
        virtual int calarea(){
        return 0;
       }
};
class  triangle:public shape
{
    // h,l,calarea;
    public :
        triangle(int m, int n) : shape(m,n)
        {
        }
    int calarea(){
        return h*l;
    }

};

int main(){
    shape *p;
    triangle t(10,20);
    p=&t;
    cout<<p->calarea()<<'\n';

}