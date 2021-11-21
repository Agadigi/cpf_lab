//BALATUCAN ADRIAN M.
//DESCRIPTION: Salary program with File I/O Implementation
//DATE: 11-20-21
#include <iostream>
#include <fstream>

using namespace std;

const double taxvalue1 = 0.12;
const double taxvalue2 = 0.10;
const double taxvalue3 = 0.05;

void promptAndWait();
void salary();
void read();
void clear();

int main()
{

    //Input

    int ch, wait = 0, temp;

    do
    {
        system("cls");
        cout << " << Salary App >>" << endl;
        cout << " [1] Input new Data " << endl;
        cout << " [2] View File Data" << endl;
        cout << " [3] Clear File Data" << endl;
        cout << " [0] Exit" << endl;
        cout << " Select an option : ";
        cin >> ch;

        switch (ch)
        {
            case 1:
            {
                
                salary();
                promptAndWait();
                break;
            }

            case 2:
            {
                
                read();
                promptAndWait();
                break;
            }  

            case 3:
            {
                
                clear();
                promptAndWait();
                break;
            }  

            case 0:
            {
                
                cout << "Thank you for using the program.";
                return 0;
                break;
            } 

            default:
            {

                cout << "Invalid Input.";
                promptAndWait();
                break;
            }
        }

    }while(wait == 0);

}

void promptAndWait()
{

    cin.ignore();
    cout << "\nPress Enter Continue...";
    cin.get();

}

    //Process

void salary()
{

    ofstream File;
    File.open("Salary_Tax_Output.txt", ios:: app);
    
    string name;
    int hrswork, empnum, taxrate;
    double ratePH, grosspay, netpay,taxpay;

    cout << "\nEnter your Employee ID     : ";
    cin >> empnum;
    cin.ignore();

    cout << "Enter your Employee Name     : ";
    getline(cin,name);

    cout << "Enter your Hours Worked      : ";
    cin >> hrswork;

    cout << "Enter your Rate per Hour     : ";
    cin >> ratePH;

   grosspay = ratePH * hrswork; 

    if(grosspay > 40000) 
    {
        taxpay = grosspay * taxvalue1;
        netpay = grosspay - taxpay;
        taxrate = 12;

    }

    else if (grosspay >= 30000 && grosspay <= 40000 ) 
    {
        taxpay = grosspay * taxvalue2;
        netpay = grosspay - taxpay;
        taxrate = 10;
    }

    else 
    {
        taxpay = grosspay * taxvalue3;
        netpay = grosspay - taxpay;
        taxrate = 5;
    }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    File << "---------------------------------------"    << endl;
    File << "Employee ID        : "   << empnum      << endl;
    File << "Employee Name      : "   << name            << endl;
    File << "Employee Gross Pay : P " << grosspay          << endl;
    File << "Employee Tax Rate  : "   << taxrate <<"%"      << endl;
    File << "Employee Net Pay   : P " << netpay            << endl;
    File << "---------------------------------------"    << endl;

    File.close();
}

    //Output

void read()
{

    string data;

    ifstream ReadFile("Salary_Tax_Output.txt");

    while (getline (ReadFile, data)) 
    {
        cout << data << endl;
    }

    ReadFile.close();

}

void clear()
{

    fstream Clear;

    Clear.open("Salary_Tax_Output.txt", ios::out | ios::trunc); 
    cout << "Data Cleared" << endl;
    
}