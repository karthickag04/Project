#include<iostream>
using namespace std;

class votingCheck{
public:

int addition(int a, int b){
int c;
c=a+b;
cout << c;
}

float addition(float a, float b, float f){
float c;
c=a+b+f;
cout << c;
}
};




int main(){
int v1, v2;
votingCheck vc;
cin >> v1 >> v2;
vc.addition(v1,v2);
float v3,v4,v5;
cin >> v3 >> v4 >> v5;
vc.addition(v3,v4,v5);



return 0;
}




/*

#include<iostream>
using namespace std;

class votingCheck{
public:
   votingCheck(){
       int age;
       cout << "enter your Age for first constructor \t";
       cin >> age;
       if (age>=18 ){
            cout << "you are eligible to vote";
        }
       else{
        cout << "you are not eligible to vote";
      }

  }

  votingCheck(int age){

       if (age>=18 ){
            cout << "you are eligible to vote output by second constructor";
        }
       else{
        cout << "you are not eligible to vote output by second constructor";
      }

  }

   void checkage(int age){
      if (age>=18 ){
            cout << "\nWelcome to function";
        }
      else{
        cout << "you are mistaken";
      }

  }


};




int main(){


    votingCheck vc;
    int age;
       cout << "\n\nenter your Age for second constructor  \t";
       cin >> age;

    votingCheck vc1(age);
   // vc.checkage(26);



return 0;
}


*/



/*

#include<iostream>
using namespace std;

class votingCheck{
public:
  void checkage(int age){
      if (age>=18 ){
            cout << "you are eligible to vote";
        }
      else{
        cout << "you are not eligible to vote";
      }

  }

};




int main(){
    int age;
    votingCheck vc;
    cout << "enter your Age  \t";
    cin >> age;

    vc.checkage(age);

return 0;
}





*/
/*

#include<iostream>
using namespace std;

class votingCheck{
public:
    int x;


};


int main(){

cout << "Enter value for X  .. \t";
votingCheck vc;
cin >> vc.x;
cout << "\n value of x is ... \n" << vc.x;

vc.x=25;
cout << "\ncurrent value of x is ... \t" << vc.x;

return 0;
}


*/
