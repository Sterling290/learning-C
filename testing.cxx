#include <iomanip>
//#include <../include/color.hpp>
#include <iostream>
//#include "emoji.h"
#include <fstream>
#include <stdlib.h>
#include <unistd.h>
#include <limits>
#include <string>

using namespace std;
int coolz = 0;
int hours = 0;
int minutes = 0;
int seconds = 0;
string trying =  "\x1B[31mTexting\033[0m\t\t";
string array1[5] = {"|","0","0","0","|"};
string array2[5] = {"|","0","0","0","|"};
string array3[5] = {"|","0","0","0","|"};
string array4[5] = {"|","0","0","0","|"};
string array5[5] = {"|","0","x","0","|"};

  
// function to display the timer
void displayClock()
{
    //HANDLE hConsole = GetStdHandle("STD_OUTPUT_HANDLE");
    // system call to clear the screen
    system("clear");
    //system("Color 1A");
  //SetConsoleTextAttribute(hConsole, 2);
    cout << string(15, '\n');
    cout.width(10);
     std::cout << "Hello, what is your name?" << std::endl;
     //cout << setfill(' ') << setw(55) <<"         TIMER         \n";
        cout << setfill(' ') << setw(55) << "--------------------------\n";
    cout << setfill(' ') << setw(29);
    cout << "| " << setfill('0') << setw(2) << hours << " hrs | ";
    cout << setfill('0') << setw(2) << minutes << " min | ";
    cout << setfill('0') << setw(2) << seconds << " sec |";
    cout << setfill(' ') << setw(55) << "--------------------------\n";
    cout << setfill(' ') << setw(29) <<"         "<< array1[0]<<"    "<< array1[1]<<"    "<<array1[2]<<"    "<<array1[3]<<"    "<<array1[4]<<"         \n";
    cout << setfill(' ') << setw(29) <<"         "<< array2[0]<<"    "<< array2[1]<<"    "<<array2[2]<<"    "<<array2[3]<<"    "<<array2[4]<<"         \n";
    cout << setfill(' ') << setw(29) <<"         "<< array3[0]<<"    "<< array3[1]<<"    "<<array3[2]<<"    "<<array3[3]<<"    "<<array3[4]<<"         \n";
    cout << setfill(' ') << setw(29) <<"         "<< array4[0]<<"    "<< array4[1]<<"    "<<array4[2]<<"    "<<array4[3]<<"    "<<array4[4]<<"         \n";
    cout << setfill(' ') << setw(29) <<"         "<< array5[0]<<"    "<< array5[1]<<"    "<<array5[2]<<"    "<<array5[3]<<"    "<<array5[4]<<"         \n" << endl;




  
}
  
void timer()
{
    while (true) {    
        // display the timer
        displayClock();
        // sleep system call to sleep 
        // for 1 second
        sleep(1);
  
        // increment seconds
        seconds++;
        // if seconds reaches 11
        if (seconds == 11) {
            cout << trying;  
          return ;
            // increment minutes
            
        }
    }
}
  
// Driver Code
int main(){
 cout << "do you want to play a game?\n";
//  cin >> coolz ;
 //if(coolz === "true"){ timer();}
 timer();
   
    return 0;
}