#include <iostream>

using namespace std;
class Rectangle;
class Triangle;
class Rectangle
{
public:
    int a,b;
    void input()
    {
        cout<< "Enter the length" <<endl;
        cin>> a;
        cout<< "Enter the breadth"<<endl;
        cin>> b;
    }
    friend void CalRECTRIArea(Rectangle obj1, Triangle obj2);
};

class Triangle
{
public:
    int a,b;
    void input()
    {
        cout<< "Enter the base" <<endl;
        cin>> a;
        cout<< "Enter the height" <<endl;
        cin>> b;

    }
    friend void CalRECTRIArea(Rectangle obj1, Triangle obj2);
};
void CalRECTRIArea(Rectangle obj1, Triangle obj2)
{
    double c;
    c= .5*obj2.a * obj2.b;
    cout<< obj1.a * obj1.b << endl;
    cout<<c<< endl;
}
int main()
{
    Rectangle obj1;
    Triangle obj2;
    obj1.input();
    obj2.input();
    CalRECTRIArea(obj1, obj2);
    return 0;
}
