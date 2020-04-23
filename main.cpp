#include <iostream>
#include "conio.h"
#include "aminstr.cpp"

using namespace std;

void replace(char* str, char* ali, char ehsan[]);
int strlen(char* str);

int main(){
    char str[200] = "Hello I am Ali and I am friend of Amin.I love my name Ali";
    char* ali = "Hello";
    char* ensan = "Hi";

    replace(str,ali,ensan);
    replace(str,"Ali","Esi");
    
    cout << str;

    return 0;
}

