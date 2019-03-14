#include <iostream>

using namespace std;
class Rectangle
{
private:
    int height, width;
public:
    void input()
    {
        cout << "Enter the width";
        cin >> width;
        cout << "Enter the height";
        cin >> height;
    }
    friend void calRecArea(Rectangle obj2);
};
class Triangle
{
private:
    int height, base;
public:
    void input()
    {
        cout << "Enter the base";
        cin >> base;
        cout << "Enter the height";
        cin >> height;
    }
    friend void calTriArea(Triangle obj);
};
void calRecArea(Rectangle obj2)
{
    int c;
    c= obj2.height*obj2.width;
    cout << c << endl;
}
void calTriArea(Triangle obj)
{
    double f;
    f = .5*obj.base*obj.height;
    cout << f << endl;
}
int main()
{
    Rectangle obj2;
    Triangle obj;
    obj.input();
    calTriArea(obj);
    obj2.input();
    calRecArea(obj2);

    return 0;
}
