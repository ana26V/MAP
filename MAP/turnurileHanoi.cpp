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
    cout << "\t\tTurnurile din Hanoi" << endl;
    cout << "Se dau trei tije A, B, C si N discuri de diametre diferite, stivuite initial pe tija A\n"
        " in ordinea descrescatoare a diametrelor, formand un con. Ss se determine secventa de\n"
        "mutari ale discurilor de pe tija initială A catre tija finala C, folosind B ca tija ,\n"
        " avand în vedere urmatoarele restrictii : \n"
        "  a.la fiecare miscare se va muta un singur disc\n"
        "  b. un disc se poate plasa doar asupra unui disc mai mare ca diametru." << endl;
    _getch();  system("cls");
}
//void meniu()
//{
//    enum menu{iesire, reg,joaca};
//    do {
//        switch (menu)
//        {
//        case iesire:
//            exit(1);
//            break;
//        case reg:
//            reguli();
//            break;
//        case joaca:
//            int N;
//            cout << "Cate discuri?\n n= ";
//            cin >> N;
//            turnurileHanoi(N, 'A', 'C', 'B');
//            break;
//        default:
//            break;
//        }
//    } while (1);
//}

int main()
{
    int N;
    
    reguli();
    system("color D");
    cout << "Cate discuri?\n n= ";
    cin >> N;
    turnurileHanoi(N, 'A', 'C', 'B');
    return 0;
}
