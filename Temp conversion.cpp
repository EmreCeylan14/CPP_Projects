#include <iostream>
#include <cmath>


using namespace std;

int main () {
    
double temp1; 
char unit; 
double convert; 

cout<< "****Temperature conversion******";

cout<< "Enter what unit you want to use for temperature F or C";
cin>> unit;

if(unit == 'F'|| unit== 'f'){
  cout<< "Enter the temperature in Celsius";
  cin>> temp1; 
  
  temp1 = 1.8*temp1+32;
  cout<< "temperature is "<< temp1<< " F\n";

}
else if(unit == 'C'|| unit == 'c'){
  cout<< "Enter the temperature in Fahrenheit";
  cin>> temp1; 

  temp1 = (temp1-32) / 1.8; 
  cout<< "Temperature is "<<temp1<< "C\n";
  
}
else{ 
  printf("Enter either C or F\n");

}

cout<< "****Temperature conversion******";

}

