#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int Sk, Ski=0;
    char R, Ri;
    int S[13];
    int B[13];
    int V[13];
    int K[13];
    ifstream fd ("CardOrder.in");
    for (int i = 1; i < 52; i++)
    {
        fd>> R>> Sk;
        cout << R <<"  "<< Sk << endl;
        if (R == 'S')
           {
           S[Sk-1]=1;
           }
        if (R == 'B')
           {
           B[Sk-1]=1;
           }
        if (R == 'V')
           {
           V[Sk-1]=1;
           }
        if (R == 'K')
           {
           K[Sk-1]=1;
           }

    }

    fd.close();
           for (int i=0; i < 13; i++)
    {
        if (S[i] == 0) {Ski = i+1; Ri='S';}
        if (B[i] == 0) {Ski = i+1; Ri='B';}
        if (V[i] == 0) {Ski = i+1; Ri='V';}
        if (K[i] == 0) {Ski = i+1; Ri='K';}
    }
    cout << Ri << "  "<<Ski;


    ofstream fr ("CardOrder.out");
    fr<< Ri << "  "<<Ski;
    fr.close();
    return 0;
}
