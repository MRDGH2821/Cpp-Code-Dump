#include <iostream>
using namespace std;

class Base {
public:
   int id;
   Base(int x = 0) : id(x)
   {
      cout << "Base\n";
   }

   int getId()
   { return id; }
};
class Derived : public Base
{
public:
   double cost;
   Derived(double c = 0.0) : cost(c)
   {
      cout << "Derived\n";
   }

   double getCost()
   { return cost; }
};
int main()
{
   Base    cBase;
   Derived cDerived;

   return 0;
}
