#include<iostream>
#include<conio.h>
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
    system("color b");
    cout << "| ==================================================================================================|" << endl;
    
    cout << "||\t\t\t\tTurnurile din Hanoi                                                ||\n" << endl;
    cout << "||\tSe dau trei tije A, B, C si N discuri de diametre diferite, stivuite initial pe tija A     ||\n"
        "||\tin ordinea descrescatoare a diametrelor, formand un con. Sa se determine secventa de       ||\n"
        "||\tmutari ale discurilor de pe tija initiala A catre tija finala C, folosind B ca tija ,      ||\n"
        "||\tavand in vedere urmatoarele restrictii :                                                   ||\n"
        "||\t  a. la fiecare miscare se va muta un singur disc                                          ||\n"
        "||\t  b. un disc se poate plasa doar asupra unui disc mai mare ca diametru.                    ||" << endl;
    cout << "| ==================================================================================================|" << endl;
   system("pause");  system("cls");
}

void play()
{
    int N,iar;
    system("color 9");
    do {
        cout << "Cate discuri?\n n= ";
        
    } while (scanf_s("%d", &N) != 1 && getchar()!='\n' || N<0);

    turnurileHanoi(N, 'A', 'C', 'B');
    do {
        cout << "\nJucati din nou? (1-da, 0-nu): "; cin >> iar;
        if (iar == 1) {
            system("pause");
            system("cls");
            play();
          
        }
        else  if (iar==0) {
            cout << "Joc incheiat..." << endl;
            exit(1);
            
        }
        else cout << "Trebuia ales 1 sau 0!" << endl;
    } while (iar!=0 || iar!=1);

}

void meniu()
{
    int opt;
    enum menu{iesire, reg,joaca}menu;
    do {
        cout << "1. Regulile jocului" << endl;
        cout << "2. Alege un numar de discuri." << endl;
        cout << "0. Iesire..." << endl;
       
        do {
            cout << "Optiune: ";// cin >> opt;
        } while (scanf_s("%d", &opt) != 1 && getchar() != '\n');
        switch (opt)
        {   
        case iesire:
            cout << "Joc incheiat..." << endl;
            break;
        case reg:
            reguli();
            break;
        case joaca:
            play();
            break;
        default:
            cout << "Optiune gresita!" << endl;
            break;
        }
    } while (opt!=0);
}

int main()
{
    
    meniu();
    return 0;
}
