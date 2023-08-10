#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;

int main () {

int num1; 
int guess; 
int tries=0; 

srand(time(NULL));
num1 = (rand()%5)+1;


cout<<"***Number guessing game***"<< endl;

do{
    cout<<"enter a GUESS between (1-5)";
    cin>> guess; 
    tries++;
     
if(guess>num1){
    cout<<"too high\n";
}
else if (guess<num1){
    cout<< "too low\n";
}
else{
    cout<< "CORRECT , # of tries: " << tries << endl;
}
}    while (guess!=num1);

cout<< "***********************";
}



