#include <iostream>
using namespace std;
int main()
{
   int x[] = { 1, 4, 8, 5, 1, 4 };
   int *ptr, y;

   ptr = x + 4;
   y   = ptr - x;
   cout << y;
}
