#include <iostream>
using namespace std;
void f() throw (float)
{
   throw 10.0f;
}


int main()
{
   try{
      cout << 'A';
      f();
      cout << 'B';
   }
   catch (...) {
      cout << "C";
   }
   return 0;
}
