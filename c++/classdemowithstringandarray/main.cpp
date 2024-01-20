

#include <iostream>

using namespace std;

class stringclass{
public:
    //constructor example
    //default constructor
    stringclass(){
    cout << "enter the name ...  " ;
    string name;
    cin >> name;
    cout << "Hi !....  " << name << "  Welcome to String Class with Constructor" ;
    cout << "\nenter value for selection \t";
    int n;
    cin >> n;
    switch (n){
    case 1 :
        cout << "Karthick Welcome to Constructor with switch ";
        break;
    case 2:
        cout << "Ram Welcome to Constructor with switch ";
        break;
    case 3 :
    cout << "Ravi Welcome to Constructor with switch ";
    break;
    }


    }

    stringclass(string a, string b)
    {
        string c;
        c= a+b;
        cout << "concatenated string value is  . " << c;

    }


};


class functionoverloadDemo{

public:


    int welcomeString(){
        string name;
        cout << "enter Your name  ";
        cin >> name;
        cout << " Hi .. " << name << endl;

    }
    int welcomeString(string name){

        cout << " Hi .. " << name << " welcome to overloaded funtion " << endl;


    }

    int welcomeString(string name, int year){

        cout << " Hi .. " << name << " welcome to overloaded funtion on the year of " << year << endl;


    }


};




class nestedclass1{
public:
 void nestedclass12();
};

class nestedclass2{
public:
    nestedclass2(){
    cout << "Welcome to nested class";
    }
};

void nestedclass1::nestedclass12(){
    nestedclass2 nc2;

    }


int main()
{
   // stringclass sc;
    //stringclass sc1("karthick", "AG");
/*
    functionoverloadDemo fod;
    fod.welcomeString();

    string name;
        cout << " enter Your name  for overloaded function" << endl;
        cin >> name;
    fod.welcomeString(name);

        int year;
        cout << " enter Year  for overloaded function" << endl;
        cin >> year;

    fod.welcomeString(name, year);
*/


    nestedclass2 nc2;
    return 0;
}

























