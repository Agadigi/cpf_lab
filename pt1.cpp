//Balatucan Adrian M.
//Activity Name - Perfomance Task 1
//Description - Your task it to write a real, interactive, odd/even number scheme. Logically the program will tell if the numbers is odd or even number for a series of int inputs.


#include <iostream>
#include <stdio.h>

using namespace std;
int main (){
    int range, n;
    int i = 0;
    
    cout << " Enter range of numbers = ";
    cin >> range;
    cout << " Enter " <<range<< " numbers = ";

    while (i < range)
    {
        cin >> n;
        if(n % 2 == 0)
    {
        cout << n << " - Even Number " <<endl;
    }
    else
    {
        cout << n << " - Odd Number " <<endl;
    }
     i++;
    }

 return 0;

}
  