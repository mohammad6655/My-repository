#include <iostream>

using namespace std;

int main()
{
   int i = 0, x, y, temp, r;
   cout << "Enter x,y: ";
   cin >> x >> y;
   if (x > y)
   {
      temp = x;
      r = y;
   }
   else
   {
      temp = y;
      r = x;
   }
   while (temp >= r)
   {
      temp -= r;
      i++;
   }
   if (x > y)
      cout << "\n " << x << " / " << y << " = " << i;
   else
      cout << "\n " << x << " / " << y << " = " << i;
   return 0;
}