/**	Name -- Salas Dongaonkar
        Division -- B
        Roll No. -- 16
        Batch -- B1
        Program -- To Make A User Driven Calculator */

#include <simplecpp>

main_program {
  int a, b;
  char s;

  cout << "Enter Two Numbers";
  cin >> a;
  cin >> b;

  cout << "Enter The Operation";
  cin >> s;

  switch (s) {
  case '+':
    cout << (a + b);
    break;

  case '-':
    cout << (a - b);
    break;

  case '*':
    cout << (a * b);
    break;

  case '/':
    cout << (a / b);
    break;
  }
}
