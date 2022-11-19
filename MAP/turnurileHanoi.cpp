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

int main()
{
    int N;
    
    //reguli();
    cout << "Cate discuri?\n n= ";
    cin >> N;
    turnurileHanoi(N, 'A', 'C', 'B');
    return 0;
}
