#include <iostream>
#include "conio.h"

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


// string replace function in c++
void replace(char* str, char* oldStr, char newStr[]){
    for(int i = 0; str[i]; i++){
        bool isOldStr = true;
        for(int j = 0; oldStr[j]; j++){
            isOldStr = isOldStr && str[i + j] == oldStr[j];
        }

        if(isOldStr){
            int start = i + strlen(oldStr);
            int lengthDiff = strlen(newStr) - strlen(oldStr);

            if(lengthDiff >= 0){
                for(int j = strlen(str); j >= start; j--){
                    str[j + lengthDiff] = str[j];
                }
            }else{
                int j = start;
                for(; j < strlen(str); j++){
                    str[j + lengthDiff] = str[j];
                }
                str[j + lengthDiff] = '\0';
            }

            
            for(int j = 0; j < strlen(newStr); j++){
                str[i + j] = newStr[j];
            }
        }
    }
}

int strlen(char* str){
    int length = 0;
    for(;str[length] != '\0'; length++);
    return length;
}