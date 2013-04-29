// Some #include might not be needed, I included all these because I was playing around with different C++ features.
// Take what you need, comment/remove the rest.

#include <iostream>
#include <string>
#include <cstdio>
#include <stdio.h>
#include <array>
#include <sstream>
#include <sstream>
using namespace std;

// convert integer to string, take an int,  return a string.
string intToString(int num){
   stringstream itos;
   itos << num;
   return itos.str();
}





#include "BaseClass.h"
#include "InheritClass1.h"
#include "InheritClass2.h"

int main()
{
    CElectronicDevice dev1;
    Fan fan1;
    CeilingFan fan2;
    
    return 0;
}
