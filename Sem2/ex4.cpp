
#include <iostream>

unsigned int strlen(const char* v) {
    if (NULL == v)
        return 0;
    char* p = const_cast<char*>(v);
    unsigned int ct = 0;
    while (*p) {
        ct++;
        p++;
    }
    return ct;
}

void strcpy(char* destination, const char* source) {
    char* p = const_cast<char*>(source);
    while (*p) {
        *destination = *p;
        destination++;
        p++;
    }
}
