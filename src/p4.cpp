#include <conio.h>
#include <iostream.h>
#include <stdlib.h>
class employee {
private:
  typedef char string;
  char name[20];
  string rid;
  int w;
  float wh;

public:
  void input();
  void display();
};
void employee::input() {
  cout << "Enter employee name: ";
  cin >> name;
  cout << "Enter Registered id: ";
  cin >> rid;
  cout << "Enter wage per hour: ";
  cin >> w;
  cout << "Enter worked hours: ";
  cin >> wh;
}
void employee::display() {
  cout << "Name: " << name << endl;
  cout << "Registered id: " << rid << endl;
  cout << "Hours worked: " << wh << endl;
  cout << "Total salary: " << w * wh << endl;
}
int main() {
  employee E;
  E.input();
  system("cls");
  E.display();
  getch();
  return 0;
}