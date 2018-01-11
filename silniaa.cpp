#include <iostream>
using namespace std;
 
int silnia(int n)
{
	if(n<2)
    return 1;
 
	return n*silnia(n-1);
}
 
int main()
{
 int n;
 
 cout<<"Podaj liczbe: ";
 cin>>n;
 cout<<"n!="<<silnia(n)<<endl;
 
 return 0;
}
