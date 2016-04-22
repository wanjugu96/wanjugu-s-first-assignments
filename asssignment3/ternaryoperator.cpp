#include <iostream>
using namespace std;
int main ()
{
while (1)
{
int x;
cin >> x;
cout (( x % 5 == 0 && x >=0 ) ? x/5 : -1 ) << "\n";
} 
return 0 ;
}