#include <iostream>

using namespace std;

typedef int toma[2];

void gogo(toma var);
void gogo_(toma& var);
void gogoi(int a);
void gogoi_(int& a);


int main()
{
    toma var;
    var[0]=0;
    var[1]=0;
    cout << var[0] << var[1]<< endl;
    gogo(var);
    cout << var[0] << var[1]<< endl;
    gogo_(var);
    cout << var[0] << var[1]<< endl;
    int a=0;
    cout << a<< endl;
    gogoi(a);
    cout << a<< endl;
    gogoi_(a);
    cout << a<< endl;

    return 0;
}

void gogoi(int a)
{
    a++;
}
void gogoi_(int& a)
{
    a++;
}


void gogo(toma var)
{
var[0]=1;
var[1]=1;
}


void gogo_(toma& var)
{
var[0]=2;
    var[1]=2;
}