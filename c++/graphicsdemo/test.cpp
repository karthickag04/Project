// #include<graphics.h>
// int main(int argc, char const *argv[])
// {
//     int gd=DETECT, gm;
//     initgraph(&gd, &gm, (char*)"");
//     circle(320,240,200);
//     getch();
//     closegraph();

//     return 0;
// }

#include <iostream>
using namespace std;

class outputprogram
{

public:
        void output()
        {
            int a;
        cout << "this is demo class";
        cin>> a;
        cout << a;
        }
};



int main()
{
    outputprogram op;
    op.output();

}
