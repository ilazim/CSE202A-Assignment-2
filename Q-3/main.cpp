#include <iostream>

using namespace std;

class Rectangle{
private:
    int base, width;
public:

};
class Triangle{
private:
    int b, w;
public:
    friend class Rectangle;
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
