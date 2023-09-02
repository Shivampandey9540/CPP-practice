# C++ Practise
> I am trying to learn c++ with basics so I can provide more 
value to my stack and learn more things !

>First program Just Hello world
```c++
#include <cstdlib>
#include <iostream>
//I know this is extra 
#include <string>
using namespace  std;
int main(){  
   //all Software programe should start with hello World
   cout << "hello world"<< endl;
}
```

>Scond programe is about if else statment 
```c++
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
        cout << "Not na Important Birthday \n";
    }
}
```
>Third one implementing Grade(class) assign system using age
```C++
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
```