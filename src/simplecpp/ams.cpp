#include <simplecpp>
int main() {
  turtleSim();
  repeat(4) {
    forward(80);
    right(90);
  }
  repeat(2) {
    right(90);
    penUp();
    forward(10);
    right(90);
    penDown();
    forward(80);
    left(90);
    penUp();
    forward(10);
    right(90);
    penDown();
    forward(80);
    right(90);
    penUp();
    forward(10);
    right(90);
    penDown();
    forward(80);
    left(90);
    penUp();
    forward(10);
    right(90);
    penDown();
    forward(80);
  }
  repeat(2);
  {
    right(90);
    forward(10);
  }
  right(90);
  forward(80);
  left(90);
  forward(10);
}
