#include <iostream>
using namespace std;

class Marks {

public:
 
    static int studentNumber;

 
    int engMarks;
    int mathsMarks;
    int phyMarks;

public:
    Marks()
    {
        int con;


        ++studentNumber;
    };
};


int Marks::studentNumber = 0;


int main()
{


    Marks obj1;
    obj1.engMarks = 50;
    obj1.mathsMarks = 80;
    obj1.phyMarks = 90;


    Marks obj2;
    obj2.engMarks = 80;
    obj2.mathsMarks = 60;
    obj2.phyMarks = 85;


    cout << "Marks for first object:\n";
    cout << Marks::studentNumber << endl;
    cout << obj1.engMarks << endl;
    cout << obj1.mathsMarks << endl;
    cout << obj1.phyMarks << endl;

    cout << "Marks for second object:\n";
    cout << Marks::studentNumber << endl;
    cout << obj2.engMarks << endl;
    cout << obj2.mathsMarks << endl;
    cout << obj2.phyMarks << endl;
}
