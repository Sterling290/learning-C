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

int hours = 0;
int minutes = 0;
int seconds = 0;
string trying =  "\x1B[31mTexting\033[0m\t\t";
string array1[5] = {"|","0","0","0","|"};
string array2[5] = {"|","0","0","0","|"};
string array3[5] = {"|","0","0","0","|"};
string array4[5] = {"|","0","0","0","|"};
string array5[5] = {"|","0","0","0","|"};

  
// function to display the timer
void displayClock()
{
    //HANDLE hConsole = GetStdHandle("STD_OUTPUT_HANDLE");
    // system call to clear the screen
    system("clear");
    system("Color 1A");
    //<term.h clear
  
  //SetConsoleTextAttribute(hConsole, 2);
    cout << string(10, '\n');
     std::cout << "Hello, what is your name?" << std::endl;
     cout << setfill(' ') << setw(55) <<"         TIMER         \n";
    cout << setfill(' ') << setw(55) << "-----------" << array1[4]<<"---------------\n";
    cout << setfill(' ') << setw(29);
    cout << "| " << setfill('0') << setw(2) << hours << " hrs | ";
    cout << setfill('0') << setw(2) << minutes << " min | ";
    cout << setfill('0') << setw(2) << seconds << " sec |" << endl;
    cout << setfill(' ') << setw(55) << "--------------------------\n";
  
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
int main()
{
    // start timer from 00:00:00
    timer();
    return 0;
}