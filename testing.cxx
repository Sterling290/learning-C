#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <term.h>

using namespace std;

int hours = 0;
int minutes = 0;
int seconds = 0;
  
// function to display the timer
void displayClock()
{
    // system call to clear the screen
    system("clear");
    //<term.h clear
  putp( tigetstr( "clear" ) );
  
    
    cout << setfill(' ') << setw(55) << "         TIMER         \n" ;
    cout << setfill(' ') << setw(55) << " --------------------------\n";
    cout << setfill(' ') << setw(29);
    cout << "| " << setfill('0') << setw(2) << hours << " hrs | ";
    cout << setfill('0') << setw(2) << minutes << " min | ";
    cout << setfill('0') << setw(2) << seconds << " sec |" << endl;
    cout << setfill(' ') << setw(55) << " --------------------------\n";
    system ("CLS");
}
  
void timer()
{
    // infinte loop because timer will keep 
    // counting. To kill the process press
    // Ctrl+D. If it does not work ask
    // ubuntu for other ways.
    while (true) {
          
        // display the timer
        displayClock();
  
        // sleep system call to sleep 
        // for 1 second
        sleep(1);
  
        // increment seconds
        seconds++;
  
        // if seconds reaches 60
        if (seconds == 11) {
          return ;
            // increment minutes
            cout << "done";  
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