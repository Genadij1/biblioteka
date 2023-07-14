#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
using namespace std;


int mystrcmp(const char* str1, const char* str2) {
    return strcmp(str1, str2);
}

int stringToNumber(const char* str) {
    return std::atoi(str);
}

char* numberToString(int number) {
    char* str = new char[20];
    sprintf(str, "%d", number);
    return str;
}

char* uppercase(char* str) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
    return str;
}

char* lowercase(char* str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

char* mystrrev(const char* str) {
    int length = strlen(str);
    char* reversed = new char[length + 1];
    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0';
    return reversed;
}
