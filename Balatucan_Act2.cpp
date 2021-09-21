//Adrian M.Balatucan
//Activity Name: OE2
//Description : POS Computer System that computes at least 3 kinds of product input, plus 12% VAT


#include <iostream>
#include <string>

using namespace std;

const double TAX = 0.12;

int main (){

     string csname, emname;
     int cake, cakeqty;
     double Yema = 250.00;
     double Ube = 300.00;
     double Chocolate = 400.00;
     double Amtyema = 0;
     double Amtube = 0;
     double Amtchocolate = 0;
     double cash;
     double total = 0;

        cout << " ----------------------------- " <<endl;
        cout << "   Welcome to Adicakes Shop    " <<endl;
        cout << " ----------------------------- " <<endl;

        cout << " Enter customer name             : ";
        getline(cin,csname); 
        cout << " Enter your email address        : ";
        getline(cin,emname);

        cout << " -------Cakes-------\n";

        cout << " [1] Yema\t||Php 250.00            \n\n";
        cout << " [2] Ube\t||Php 300.00             \n\n";
        cout << " [3] Chocolate\t||Php 400.00       \n\n";

        cout << " What is the item you want?            :  ";
        cin  >> cake; 
        cout << " How many you want to buy?             :  ";
         cin  >> cakeqty;

         cout <<"\n\t -------Items Ordered-------\t\t\n\n";

     switch(cake)
     {
         case 1: 
         cout << " Yema Cake\t || Php 250.00  X " <<cakeqty <<"="<<cakeqty * Yema<<"\n";
         Amtyema = cakeqty * Yema;
         break;

         case 2: 
         cout << " Ube Cake\t || Php 300.00  X " <<cakeqty <<"="<<cakeqty * Ube<<"\n";
         Amtube = cakeqty * Ube;
         break;

         case 3: 
         cout << " Chocolate Cake\t || Php 400.00  X " <<cakeqty <<"="<<cakeqty * Chocolate<<"\n";
         Amtchocolate = cakeqty * Chocolate; 
         break;
     }

        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
            
     total = 0;
     total = total + Amtyema + Amtube + Amtchocolate + TAX;

        cout << " -----------------------------" <<endl;
        cout << "         RECEIPTS             " <<endl;
        cout << " -----------------------------" <<endl;
        cout << " Your name is            : " <<csname <<endl;
        cout << " Your email address is   : " <<emname <<endl;

        cout<<"Total Amount is: "<<total<<"\n";
        cout<<"Cash: "; 
        cin>>cash;
        cout<<"Change: "<<cash - total<<"\n\n";

        cout<<" -----BON APETIT----- !\n\n\n";

        return 0;

    

        


       


     
        



     







}