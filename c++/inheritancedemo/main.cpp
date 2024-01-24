#include <iostream>

using namespace std;

// base class
class animal{

private:
    string color;
    int weight;

public:
    void eat(){
    cout<< "i can eat " << endl;
    }

    /*
    string mycolour(){

        string color="black";
        return color;
    }
    */

    void setmycolor(){
        cout << " Set my color : \t" ;
        cin >> color;

    }
    string getmycolor(){

        return color;
    }


    void setWeight(){
        cout << " set my Weight : \t";
        cin >> weight;
    }

    int getWeight(){
        return weight;
    }
   /* int myweight(){
        int weight=25;
        return weight;
    }
    */

    void animalsound(){
    cout << "this is animal sound .. ";
    }


};

//derived class
class dog : public animal {

public:
    void animalsound(){
    cout << "i can bark " << endl;
    }
};

class puppy : public dog{

};

class cow : public animal{

public:
    void animalsound(){
    cout << "i can Mow " << endl;
    }
};

int main()
{
    /*
    cout << "this output is from animal class";
   animal a;
   a.eat();
   //cout<< a.mycolor() << endl;
   cout << a.myweight() << endl;
   //a.myweight1();

   if(a.myweight()==25){
    cout<< "return type value is equal to 25" << endl;
   }


   a.setmycolor();
   cout << "my color is : " << a.getmycolor();

   */

   cout << "this output is from dog class" << endl;

   dog d;


   d.setmycolor();
   d.setWeight();


   d.eat();
   cout << "My color is : "<<d.getmycolor() << endl;
   cout << "My Weight is : " << d.getWeight() << endl;
   d.animalsound();





   cout << "this output is from puppy class" << endl;


   puppy p;


   p.setmycolor();
   p.setWeight();


   p.eat();
   cout << "My color is : "<<p.getmycolor() << endl;
   cout << "My Weight is : " << p.getWeight() << endl;
   p.animalsound();


   cout << "this output is from Cow class" << endl;


   cow c;
    c.setmycolor();
   c.setWeight();


   c.eat();
   cout << "My color is : "<<c.getmycolor() << endl;
   cout << "My Weight is : " << c.getWeight() << endl;
   c.animalsound();


    return 0;
}
