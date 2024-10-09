#include <bits/stdc++.h>
using namespace std;
class shape
{
public:
    double area;
    double calculatearea()
    {
        return area;
    }
};
// class circle : public shape
// {
//     int redious;
//     double calculatAarea()
//     {
//         return 2 * 3.1416 * redious * redious;
//     }
// };
class ractangle : public shape
{
    double h, l;
    double calculatAarea()
    {
        return h * l;
    }
};

int main()
{
   // circle s1;
    ractangle R;
    R.calculatearea();
    
    //cout << s1.area << '\n';
    cout << R.area << '\n';
}
