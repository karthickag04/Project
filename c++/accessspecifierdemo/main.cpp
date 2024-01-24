#include <iostream>

using namespace std;

// bass class
class cars{
public :
    string brand="NISSAN";

    void MessaggePrint(){
    cout << "welcome to Nissan" ;
    }

};

class cartype{

public:
    string cartypename="Nissan SUV";
    void MessaggePrintfor(){
    cout << "welcome to Nissan SUV" ;
    }

};

//derived class
class nissanSUV : public cars, public cartype{



};


int main(){

    nissanSUV ns;
    cout << ns.brand;
    cout << ns.cartypename;
    ns.MessaggePrint();
    ns.MessaggePrintfor();


    return 0;

}
























/*

#include <iostream>

using namespace std;

class salaryprint{
private:
    int salary;

public:
    string empname;
    void setSalary(int s){
            salary=s;
        }
    int getSalary(){
            return salary;
        }

    int getSalaryPrint(){
        cout << salary;
        //not return anything
    }
    void getSalaryPrint1(){
        cout << salary;
    }
};

int main(){

    salaryprint sp;
    sp.setSalary(50);
    cout << sp.getSalary() << endl; //50
    sp.getSalaryPrint(); // value
    sp.getSalaryPrint1();

    if (50==50){
        cout << "its a return type";
    }
    if (50==50){
        cout << "its a return type";
    }

    return 0;

}


*/




/*


#include <iostream>

using namespace std;

class accessspecifierdemo{

private:
    int b=10;

protected:
    int pc=250;

public:

    int a,c;
    void printb(){
    c =b;
    cout<< c;

    c=pc;
    cout << c;
    }
};



int main()
{
    accessspecifierdemo as;
    as.a=25;
    cout << as.a;
    as.printb();

    //cout << as.pc;
    return 0;
}

*/
