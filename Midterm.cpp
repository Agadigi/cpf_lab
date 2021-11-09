//Name: Balatucan Adrian M.
//Activity Name: OE5
//
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>

using namespace std;

int n, ext = 1, pos = 0;
void kilotogram(double kilo , double gram = 0);
void gramtomilli(double gram2, double milli = 0);
void poundtoounce(double pound, double ounce = 0);
void ouncetogram(double ounce2, double gram3 = 0);
void promptAndWait();

int main(){

    double kilo, gram2, pound, ounce2;
    double gram = 0, milli = 0, ounce = 0, gram3 = 0; 

    do{
        system("cls");
        cout << endl;
        cout << "[1] Kilogram to Gram" << endl;
        cout << "[2] Gram to Milligram" << endl;
        cout << "[3] Pound to Ounce " << endl;
        cout << "[4] Ounce to Gram " << endl;
        cout << "[0] Exit " <<endl;
        cin >> n;

        switch(n){
            case 1:{
                cout << "\n Kilogram to Gram " << endl;
                cout << "Enter : ";
                cin >> kilo;
                kilotogram(kilo, gram);
                promptAndWait();
                break;
            }
            case 2:{
                cout << "\n Gram to Milligram " << endl;
                cout << "Enter : ";
                cin >> gram2;
                gramtomilli(gram2, milli);
                promptAndWait();
                break;
            }
            case 3:{
                cout << "\n Pound to Ounce " << endl;
                cout << " Enter : ";
                cin >> pound;
                poundtoounce(pound, ounce);
                promptAndWait();
                break;
            }
            case 4:{
                cout << "\n Ounce to Gram " << endl;
                cout << " Enter : ";
                cin >> ounce2;
                ouncetogram(ounce2, gram3);
                promptAndWait();
                break;
            } 
            case 0:{
                cout << "\n< Exit >>" << endl;
                cout << " Exit ";
                cin >> ext;
                return 0;  
            }     
            default:{
                cout << "Invalid Input!";
                break;
            }
        }
    }while(pos == 0);  
}
    void kilotogram(double kilo , double gram1){ 
        cout.setf(ios::fixed);
        cout.precision(2);
        cout <<endl << "***************" <<endl;
        cout << "Gram : " << (kilo * 1000) << " g" <<endl;
        cout <<endl << "***************" <<endl;
}
    void gramtomilli(double gram2, double milli){   
        cout.setf(ios::fixed);
        cout.precision(2);
        cout <<endl << "***************" <<endl;
        cout << "Milli : " << (gram2 * 1000) << " mg" <<endl;
        cout <<endl << "***************" <<endl;
}
    void poundtoounce(double pound, double ounce){
        cout.setf(ios::fixed);
        cout.precision(2);
        cout <<endl << "***************" <<endl;
        cout << "Ounce : " << (pound * 16 ) << " oz" <<endl;
        cout <<endl << "***************" <<endl;
}        
    void ouncetogram(double ounce2, double gram3){
        cout.setf(ios::fixed);
        cout.precision(2);
        cout <<endl << "***************" <<endl;
        cout << "Gram : " << (ounce2 * 28.3495) << " g" <<endl;
        cout <<endl << "***************" <<endl;
}
     void promptAndWait(){
     cout << "Do you wish to continue " <<endl;
     cout << "1 = try again " <<endl;
     cout << "2 = exit " <<endl;
     cin >>  ext;
}
