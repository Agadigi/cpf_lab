// Adrian Martinez Balatucan
// Activity : OE1
// Description : Intput and Output
// Date : September 07, 2021


#include <iostream>
using namespace std;


int main (){
    string name, gender, age, address, yrsn, cn ; 

    cout << " HELLO SIR ISAAC ! " <<endl;
    
    cout << " This is my First Activity " <<endl;
    
    cout << "\n ---------------------------------" <<endl;
    cout << " Enter your Name: ";
    getline(cin,name);
    cout << " hello :) "  <<name<<endl;
    cout << " What's your Gender? ";
    getline(cin,gender);
    cout << " thanks for confirmation so you are "  <<gender<<endl;
    cout << " What is your age? ";
    getline(cin,age);
    cout << " still young! "  <<age << " years old " <<endl;
    cout << " What is your Address? ";
    getline(cin,address);
    cout << " woah! so you are from "  <<address<<endl;
    cout << " What is your Year & Section? ";
    getline(cin,yrsn);
    cout << " befriend with your classmates on "  <<yrsn<<endl;
    cout << " What is your contact number? ";
    getline(cin,cn);
    cout << " is it still reachable? "  <<cn<<endl;



    cout << "\n *************************************" <<endl;
    cout << "\n Your Name is : " <<name; 
    cout << "\n Your Gender is : " <<gender;
    cout << "\n Your Age is : " <<age;
    cout << "\n Your Address is : " <<address;
    cout << "\n Year & Section : " <<yrsn;
    cout << "\n Your Contact Number is : " <<cn<<endl;
    cout << "\n ************************************ "; 


    return 0;


}