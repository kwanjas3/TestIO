#include <iostream>

//bit shifting all 1 bits are shifted << (left) by number
using namespace std;

int main (void){
  int x = 16;
  int y = 0;
  
  y = x << 1;
  //y = x << 2; //x*4
  //y = x << 3; // x*8
  
  cout << y << endl; // x = 16 = 1111 shifted will be 0001 1110
  //each bitshift is 2^n value;
  //therefore to multiply by 7; you can 2^3 = 8x multiplier, then subtract by base num
  // (x << 3) - x 


}
