#include <cstdlib>
#include <iosTream>
#include <string>
using namespace std;

// Importance  age period  with If else statment

int  main(){

    string sAge = "";
    cout << "Enter you age : ";
    cin >> sAge ;

    int nAge = stoi(sAge);

    if((nAge>=1) && (nAge<=18)){
        cout << "Important Birthday \n";

    }else if( (nAge == 21) || (nAge == 50)){
       cout << "Important Birthday \n";  
    }else if ( nAge >=65){
         cout << "Important Birthday \n";  
    }else{
        cout << " Not na Important Birthday \n";
    }
}