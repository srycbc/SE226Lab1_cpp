#include <iostream>
#include <string>

using namespace std;

int main() {

    cout<< "**QUESTION 1**";
    string name;
    int ID;

    cout<<" "<< endl;
    cout <<"What is your name?" <<endl;
    cin>> name;
    cout<< "Hello " << name<< endl ;

    cout <<"What is your student ID?";
    cin >> ID;
    cout <<"Your student ID is " << ID <<endl;

    cout<<"**QUESTION 2**"<< endl;
    cout<<" "<< endl;

    int var1, var2;
    int sum, diff, prod;

    cout <<"Enter var1:";
    cin>> var1;
    cout <<"Enter var2:";
    cin>> var2;

    sum = var1 + var2;
    diff = var1 - var2;
    prod = var1 * var2;

    cout<< "var1: " << var1 << endl;
    cout<< "var1: " << var2 << endl;
    cout<< "sum: " << sum <<endl;
    cout<< "diff: " << diff <<endl;
    cout<< "prod: " << prod <<endl;

    cout<<"**QUESTION 3**"<< endl;
    cout<<" "<< endl;

    string sName;
    int midterm, lab, final, lastScore;

    cout<<"name: "<< endl;
    cin>> sName;
    cout<<"lab: "<< endl;
    cin>> lab;
    cout<<"midterm: " <<endl;
    cin>> midterm;
    cout<<"final: " <<endl;
    cin>> final;

    lastScore = lab*25/100 + midterm*35/100 + final*40/100;

    cout<<"Name: "<< sName<< endl;
    cout<< "Lab: " <<lab<< endl;
    cout<< "Midterm: "<< midterm<< endl;
    cout<<"Final: "<< final<< endl;
    cout<<"Last Score: "<< lastScore<< endl;

    cout<<"**QUESTION 4**"<<endl;
    cout<<" "<< endl;

    cout<<"*\n"
    <<"**\n"
    <<"***\n"
    <<"**\n"
    <<"*\n";


    return 0;
}
