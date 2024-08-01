#include <iostream>
using namespace std;
char *myf(char *ptr)
{
   ptr += 3;
   return(ptr);
}


int main()
{
   char *x, *y;

   x = "Hello";
   y = myf(x);
   printf("y = %s \n", y);
   return 0;
}
