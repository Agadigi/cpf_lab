//Name: Adrian M. Balatucan
//Activity Name: OE5
//Description: To create a program that will reverse any string that user's input.
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>

using namespace std;

void promptAndwait();
void revString(string& word);
void revInt(unsigned int& num);

int main(){
    string word;
    unsigned int num;
    int  ch, pos=0;

do{
        system("cls");
        cout << endl;
        cout << "[1] Reverse a string" << endl;
        cout << "[2] Reverse Unsigned Integer" << endl;
        cout << "[3] Exit " << endl;
        cout << "Select Function : ";
        cin >> ch;

        switch(ch){
            case 1:{
                cout << "\n<< Reverse a string >>" << endl;
                cout << "Enter a word : ";
                cin.ignore();
                getline(cin,word);
                revString(word);
                promptAndwait();
                break;
            }
            case 2:{
                cout << "\n<< Reverse Unsigned Integer >>" << endl;
                cout << "Enter a number[0-9] : ";
                cin >> num;
                revInt(num);
                cin.ignore();
                promptAndwait();
                break;
            }
            case 3:{
                cout << "\n<< Exit >>" << endl;
                cout << " Program is terminated : ";
                return 0;
            }
            default:{
                cout << "Invalid Input!";
                promptAndwait();
                break;
            }
        }
    }while(pos == 0);  
}
 void revString(string& word)
{
    int num = word.length();
    for (int i = 0; i < num / 2; i++){
        swap(word[i], word[num - i - 1]);
    }
    cout << " << Reversed word : " << word << endl;
}
 void revInt(unsigned int& num)
{
    int reverse=0, rem;
    while(num!=0)
    {
    rem=num%10;
    reverse=reverse*10+rem;
    num/=10;
    }
    cout << "\n<< Reversed number : " <<reverse <<endl;
}

void promptAndwait(){
    cout << "Press Enter or Return to continue...";
    cin.get();
}