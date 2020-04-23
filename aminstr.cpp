int strlen(char* str);

bool isLowerCase(char ch){
    return ch >= 'a' && ch <= 'z';
}

bool isUpperCase(char ch){
    return ch >= 'A' && ch <= 'Z';
}

bool isLetter(char ch){
    return isLowerCase(ch) || isUpperCase(ch);
}

int wordsNum(char * str){
    int counter = 0;
    bool isInWord = false;

    for(int i = 0; str[i]; i++){
        if(isLetter(str[i])){
            if(!isInWord){
                counter++;
                isInWord = true;
            }
        }else{
            isInWord = false;
        }
    }

    return counter;
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