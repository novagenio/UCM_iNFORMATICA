#include <iostream>

using namespace std;

int const N = 5;
typedef int tVector[N];

bool sonIguales(tVector vector1, tVector vector2){
    int i=0;
    bool iguales = true;
    while(i<N && iguales){
        if(vector1[i]!=vector2[i])
            iguales = false;
        i++;
    }
    return iguales;
}

int main()
{
    tVector vector1={3, 3, 5, 9, 1};
    tVector vector2={3, 5, 5, 9, 1};
    bool iguales = sonIguales(vector1, vector2);
    if(iguales)
        cout << "Son iguales" << endl;
    else
        cout<< "No son iguales";
    return 0;
}
