#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

// which Grade you should  be in  using your age
// and if you are between 6 to 17 which class you should  be in
// like 6 => 1 , 17 =>12 it gose from 1 -12 in 6  to 17 age

int main(){
        string sAge = "";
        int grades = 12;
            cout << "Enter the age to get class :" <<endl;
            cin >> sAge;
    int nAge = stoi(sAge);
    if(nAge==5 ){
   cout << "Go to Kindergarten";
    }
    else if ((nAge>=6) && (nAge<=17)){
         int persongrade =grades-( 17 - nAge);
        cout << "Go to Grade "<< persongrade<< endl ;
    }
    else if(nAge>17){
        cout << "Go to Collage";
    }else {
        cout << "Too Young for School";
    }
}