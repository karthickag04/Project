#include <iostream>

using namespace std;

class printmessageclass{

public :
    int a = 25;

    void messageFirst(){
    cout << "first class function";
    }


    int additionProgram(){
    int ab,ac;
    cin >> ab >> ac ;
    cout << (ab+ac);
    }

    void MessageSecond();

};

void printmessageclass::MessageSecond(){
    cout << "Welcome to classes and objects";
}


int printmessage(){

cout << "welcome to sample function";
}

int main()
{
    cout << "Hello world!" << endl;
    printmessage();
    printmessageclass p1;

    p1.MessageSecond();
    return 0;
}

