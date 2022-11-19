#include<iostream>
#include<string.h>
#include<conio.h>
#include<string.h>
using namespace std;
void turnurileHanoi(int n, char tija_init, char tija_finala,char tija_aux)
{
    if (!n) {
        return;
    }
    turnurileHanoi(n - 1, tija_init, tija_aux, tija_finala);
    cout << "Se muta discul [" << n << "] de pe tija -- " 
        << tija_init<< " pe tija -- " << tija_finala << endl;

    turnurileHanoi(n - 1, tija_aux, tija_finala, tija_init);
}
void reguli()
{
    system("color A");
    cout << "| ==================================================================================================|" << endl;
    cout << "||\t\t\t\tTurnurile din Hanoi                                                ||\n" << endl;
    cout << "||\tSe dau trei tije A, B, C si N discuri de diametre diferite, stivuite initial pe tija A     ||\n"
        "||\tin ordinea descrescatoare a diametrelor, formand un con. Ss se determine secventa de       ||\n"
        "||\tmutari ale discurilor de pe tija initială A catre tija finala C, folosind B ca tija ,      ||\n"
        "||\tavand în vedere urmatoarele restrictii :                                                   ||\n"
        "||\t  a. la fiecare miscare se va muta un singur disc                                           ||\n"
        "||\t  b. un disc se poate plasa doar asupra unui disc mai mare ca diametru.                    ||" << endl;
    cout << "| ==================================================================================================|" << endl;
   system("pause");  system("cls");
}
void meniu()
{
    int opt;
    enum menu{iesire, reg,joaca}menu;
    do {
        cout << "1. Regulile jocului" << endl;
        cout << "2. Joaca. Alegere numar de discuri." << endl;
        cout << "0. Iesire..." << endl;
       // cout << "3. " << endl;
        cout << "Optiune: "; cin >> opt;
        switch (opt)
        {
            
        case iesire:
            exit(1);
            break;
        case reg:
            reguli();
            break;
        case joaca:
            int N;
            cout << "Cate discuri?\n n= ";
            cin >> N;
            turnurileHanoi(N, 'A', 'C', 'B');
            break;
        default:
            break;
        }
    } while (1);
}

int main()
{
    int N;
    
    reguli();
    //system("color D");
   // meniu();
   // cout << "Cate discuri?\n n= ";
    //cin >> N;
    //turnurileHanoi(N, 'A', 'C', 'B');
    return 0;
}
