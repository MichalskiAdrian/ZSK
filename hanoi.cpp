#include <iostream>

using namespace std;

void hanoi(int n, char a, char b, char c)
{
    if(n>0)
    {
        hanoi(n-1,a,c,b);
        cout<<a<<">"<<c<<endl;
        hanoi(n-1,b,a,c);
    }
}

int main()
{
    int n;
    cout<<"Podaj liczbe elementow:";
    cin>>n;
    hanoi(n,'1','2','3');
    return 0;
}
