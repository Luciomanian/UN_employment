#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class money{
private:
    int First3;
    int Second3;
    int Third3;
    float point;
    char apf = '`';
    char doll = '$';
public:
    void moneytype(double mount){
        int mount2 = mount;
        First3 = mount / 1000000;
        Second3 = (mount2 % 1000000) / 1000;
        Third3 = ((mount2 % 1000000) % 1000) / 1;
        point = (mount - mount2) * 100;
        int twoP = point;

        cout << endl << doll << First3 << apf;
        if (Second3 / 10 == 0){
            cout << '0' << '0' << Second3;
        }
        else if(Second3 / 100 == 0){
            cout << '0' << Second3;
        }
        else{
            cout << Second3;
        }
        cout << apf;
        if (Third3 / 10 == 0){
            cout << '0' << '0' << Third3;
        }
        else if(Third3 / 100 == 0){
            cout << '0' << Third3;
        }
        else{
            cout << Third3;
        }
        cout << ',' << twoP << '.';
    }
    void mstold(char row[], char dec[]){
        for(int i = 3; i < 15; i++){
            int tmp = row[i];
            row[i] = row[i + 1];
            row[i + 1] = tmp;
        }
        for(int i = 6; i < 15; i++){
            int tmp = row[i];
            row[i] = row[i + 1];
            row[i + 1] = tmp;
        }


        int m = strtol(row, &dec , 0) / 1;
        long double M = m;
        cout << dec << endl;
        for(int i = 0; i < 2; i++){
            int tmp = dec[i];
            dec[i] = dec[i + 1];
            dec[i + 1] = tmp;
            }
        int l = strtol(dec , NULL, 0);
        double dotp = l;
        dotp = dotp / 100;
        long double suum = M + dotp;
        cout << suum;
    }
};
int main() {
money A;
double x;
char a[] = {"173`658`001.32"};
char *end;
//cin >> x;
A.mstold(a,end);
//A.moneytype(x);
    return 0;
}
