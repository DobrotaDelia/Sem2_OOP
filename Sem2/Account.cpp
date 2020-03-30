
#include "Account.h"
#include <iostream>
#include <fstream>
using namespace std;
void Account::Bezahlen(const double& Betrag) {
    saldo -= Betrag;
    Transaktionen(Betrag, "OUT");
}

void Account::Einzahlung(const double& Betrag) {
    saldo += Betrag;
    Transaktionen(Betrag, "IN");
}

double Account::Kontostand() {
    return saldo;
}

ofstream g("Transaktionen");
void Account::Transaktionen(double Betrag, const char* typ) {
    /*
        fstream f;
        f.open("Transaktionen", ios::out);
        f<<typ<<" "<<Betrag<<" "<<saldo<<"\n";
        f.close();*/
    g << typ << " " << Betrag << "\n";
}


void Account::Einlesen() {
    string typ;
    double betrag;
    ifstream f("Transaktionen");
    if (f.is_open()) {
        while (f >> typ >> betrag) {
            cout << typ << " " << betrag << "\n";
        }
        f.close();
    }
    else {
        cout << "Not open";
    }
}

Account::Account() {
    saldo = 0;
}
