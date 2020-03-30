
#include <iostream>
char* strfind(const char* s, const char* f) {
    char* p = const_cast<char*>(f);
    int ct = -1;
    while (*p) {
        if (*p == *s)
        {
            std::cout << "p este: " << *p << " si s este: " << *s << '\n';
            return p;
        }
        ct++;
        p++;
    }
    if (ct == -1)
        return NULL;
}