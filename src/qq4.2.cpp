#include <iostream>
using namespace std;

class A { public: virtual ~A() {} };
class B : public A {};
class C : public A {};

int main()

{
   A objA;
   B objB;
   A *pA = dynamic_cast<A>(&objB);

   pA == NULL ? cout << "cast-1 invalid:" : cout << "cast-1 valid:";
   B pB = dynamic_cast<B>(pA);

   pB == NULL ? cout << "cast-2 invalid:" : cout << "cast-2 valid:";
   C pC = dynamic_cast<C>(new B);

   pC == NULL ? cout << "cast-3 invalid:" : cout << "cast-3 valid:";
   pC = dynamic_cast<C>(&objB);
   pC == NULL ? cout << "cast-4 invalid:" : cout << "cast-4 valid:";
   return 0;
}
