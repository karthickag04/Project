#include <iostream>

using namespace std;

class myclass{
public:
    int a=25;
    int cb(){
        int x, y;
    cin >> x >> y;
    cout << x+y;
    }
};

int main()
{
    myclass mc;
    cout << "Hello world!" << endl;
    cout << mc.a;
    mc.cb();
    return 0;
}

