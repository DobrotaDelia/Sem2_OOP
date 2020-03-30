#include <iostream>
#include "ex1.h"
#include "ex4.h"
#include "Account.h"
int main() {
    std::cout << strfind("s", "jkhashjb") << "\n";
    std::cout << strlen("jmhg") << "\n";
    char s[100] = "cscs";
    char s2[100] = "as";
    std::cout << s2 << "\n";
    strcpy(s2, s);
    std::cout << s2 << "\n";
    Account account;

    //account.Einlesen();
    account.Einzahlung(100);
    account.Bezahlen(20);
    account.Einzahlung(10);
    std::cout << account.Kontostand();
    account.Einlesen();

    return 0;
}
