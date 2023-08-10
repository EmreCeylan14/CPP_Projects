#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;

int main () {

srand(time(0));
int randNum= rand() % 5 + 1; 

switch(randNum){

    case 1: 
        cout<< "You win a bumper sticker \n";
        break; 
    case 2: 
        cout<< "You win a free lunch";
        break; 
    case 3: 
        cout<<"You win a toy car";
        break; 
    case 4: 
    cout<< "You win a giftcard";
    break; 

    case 5: 
    cout<< "You win a car!!";
    break;  

}
}
