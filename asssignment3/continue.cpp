#include <iostream>
using namespace std;
int main ()
{
while (1)
{
int x;
cin >> x ;
if (x % 5 > 0)
{
cout << "-1\n";
continue;
}
cout << x/5 << "\n";
}
return 0;
}
