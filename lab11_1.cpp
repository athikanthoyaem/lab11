// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include <ctime>
#include <cstdlib>
using namespace std ;

int main(){
    cout << "Press Enter 3 times to reveal your future."  ;
    int Entercount = 0;
    while( Entercount < 3 ){
        cin.get();
        Entercount++ ;
    }
    string grade[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"} ;
    srand(time(0)) ;
    int randomGrade = rand() % 9 ;
    cout << "You will get " << grade[randomGrade] << " in this 261102." << endl ;
    return 0;
}
