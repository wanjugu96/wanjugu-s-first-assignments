#include <iostream>
using namespace std;
int main()
{
int x;
cin >> x;
for(int y=2; x > 0; ++y)
{
bool isprime =true;
for (int k=2; k < y ;++k)
{
    if (y % k == 0)
    {
isprime =false;
break;
}
}
if(isprime)
{
--x;
cout << y << "\n";
}
}
return 0;
}