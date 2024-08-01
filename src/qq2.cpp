#include <iostream>
using namespace std;
class demo
{
   int num;
public:
   demo(int x)
   {
      num = x;
   }

   void operator-()
   {
      num = num;
   }

   void show()
   {
      cout << num << endl;
   }
};

int main( )
{
   demo dl(10);

   -dl;
   dl.show();
}
