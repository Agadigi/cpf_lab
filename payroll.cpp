//Balatucan, Adrian M.
//Activity Name : Problem Set 1
//Description : Write a C++ payroll program that prompts the user for a name, employee number, date of payday, hourly pay rate, and number of hours worked.


 #include <iostream>
 #include <stdio.h>
 #include <string>

using namespace std;

 int main(){
     string uname, empnum, datepd, status;
     double hourpr, hrswork, grosspay, netp, miscededuc, withtax;
     double tax = 0.12; 
     double philh = 150.00;
     double sss = 250.00;
     double pagibig = 200.00;

     cout << " Enter your name : ";
        getline(cin,uname);
     cout << " Employee number : ";
        getline(cin, empnum);
     cout << " Date of payday  : ";
        getline(cin,datepd);
     cout << " Hourly pay rate : ";
        cin >> hourpr;
     cout << " Hours worked : ";
        cin >> hrswork;
        
     grosspay = hourpr * hrswork;
     withtax = grosspay * tax;
     netp = grosspay - withtax - philh - sss - pagibig;

     if(grosspay < 5000){
         tax = grosspay * 0.12;
         status = " Contractual ";

     }
     else if((grosspay >= 5000 ) && (grosspay <= 10000)){
        tax = hourpr * hrswork * tax;
        status = " Probationary ";
    }else{
        status = " Regular ";
    } 
        
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);


        cout << "\n Payroll summary for : " <<uname <<endl;
        cout << " Employee No. : " <<empnum <<endl;
        cout << " Payroll date : " <<datepd <<endl;
        cout << " You earned " <<hrswork<< " at " <<hourpr<< " per hour " <<endl;
        cout << " Gross Pay                     : " <<grosspay <<endl;
        cout << " Withholding tax                 " <<withtax <<endl;
        cout << " Philhealth                      " <<philh <<endl;
        cout << " SSS                             " <<sss <<endl;
        cout << " Pagibig                         " <<pagibig <<endl;
        cout << " ----------------------------------" <<endl;
        cout << " Net pay                         " "Php" <<netp <<endl;
        cout << " Employee statues  :" <<status <<endl;
        

        return 0;

 }