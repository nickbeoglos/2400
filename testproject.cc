// Trying to test code real quick!!

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[]) {

    int numofdogs = 0;
    string cats = "";
    string YES = "Y";
   
    

    cout << "How many dogs do you have?" << endl;
    cin >> numofdogs;
    cout << "You have " << numofdogs << " dogs!" << endl;
    
    cout << "Do you like cats? (Y/N)" << endl;
    cin >> cats;
    
    if (cats == YES)
    {
        cout << "Cool!";
    } else {
        cout << "Awww";
    }

    
    
    
            
    
    
    
    
}
