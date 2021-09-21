//Adrian M. Balatucan
//Activity : 0E3
//Description : Create a salary program in C++ with inputs, employee id, employee name, hours worked, and rate per hour. Salary is computed based on hours worked and rate per hour minus tax based on the tax schemes.

#include <iostream>
using namespace std;
string mystring;


int main () {
    double TAX;
    int hrswrk;
    double rphr;
    double grssp;
    double Tax;
    double Netp;
    double Trate;
    double taxamt;
    string emname, emid;

    cout << " Enter employee name             : ";
        getline(cin,emname); 
    cout << " Enter employee ID               : ";
        getline(cin,emid); 
    cout << " Enter hours of work             : ";
        cin>> hrswrk;
    cout << " Enter rate per hour             : ";
        cin>> rphr;

    if(hrswrk > 40){
        grssp = rphr * 40 + 1.5 * rphr * (hrswrk - 40); 
    }
    else{
        grssp = rphr * hrswrk;
    }
    if(grssp > 40000) {
      TAX = .12;
      taxamt = rphr * hrswrk * TAX;
      Netp = grssp - taxamt;
    }
    else if(grssp > 30000 && grssp < 40000) {
      TAX = .10;
      taxamt = rphr * hrswrk * TAX;
      Netp = grssp - taxamt;
    }

     else if(grssp > 20000) {
      TAX = .05;
      taxamt = rphr * hrswrk * TAX;
      Netp = grssp - taxamt;
    }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);


    cout << "======================================" << endl;
    cout << "Your employee name  : " <<emname << endl;
    cout << "Your employee ID    : " <<emid << endl;
    cout << "Hours of work       : " <<hrswrk <<endl;
    cout << "Rate per hour       : " <<rphr << endl;
    cout << "Your gross pay      : " <<grssp <<"\n";
    cout << "Your tax rate       : " <<TAX <<"\n";
    cout << "Your net pay        : " <<Netp <<"\n";
    cout << "======================================" <<endl; 

    return 0;







}