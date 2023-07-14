#include <iostream>
#include <cstring>
using namespace std;

int mystrlen(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

char* mystropy(char* str1, const char* str2) {
    char* destination = str1;
    while ((*str1++ = *str2++)) {
        ;
    }
    return destination;
}

char* mystrcat(char* str1, const char* str2) {
    char* destination = str1;
    while (*str1) {
        str1++;
    }
    while ((*str1++ = *str2++)) {
        ;
    }
    return destination;
}

char* mystrchr(char* str, char c) {
    while (*str) {
        if (*str == c) {
            return str;
        }
        str++;
    }
    return nullptr;
}

char* mystrstr(char* str1, char* str2) {
    int len1 = mystrlen(str1);
    int len2 = mystrlen(str2);

    if (len2 > len1) {
        return nullptr;
    }

    for (int i = 0; i <= len1 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (str1[i + j] != str2[j]) {
                break;
            }
        }
        if (j == len2) {
            return &str1[i];
        }
    }
    return nullptr;
}
