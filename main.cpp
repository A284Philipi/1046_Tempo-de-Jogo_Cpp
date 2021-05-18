#include <iostream>

using namespace std;

int main()
{
    int a, b, t;
    cin >> a;
    cin >> b;
    if (a == b){
        cout << "O JOGO DUROU 24 HORA(S)" <<endl;
    }
    else{
        if (a < b){
            t = b - a;
            cout << "O JOGO DUROU " << t << " HORA(S)" <<endl;
        }else{
            t = (24 - a) + b;
            cout << "O JOGO DUROU " << t << " HORA(S)" <<endl;
        }
    }
    return 0;
}
