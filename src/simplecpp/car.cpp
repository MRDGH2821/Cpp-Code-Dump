#include <simplecpp>
main_program {
  turtleSim();
  repeat(360) {
    forward(1);
    right(1);
  }
  forward(200);
  repeat(360) {
    forward(1);
    right(1);
  }
  forward(30);
  left(90);
  forward(60);
  left(75);
  forward(60);
  right(45);
  forward(60);
  left(60);
  forward(100);
  left(45);
  forward(60);
  right(30);
  forward(60);
  left(75);
  forward(70);
  left(90);
  forward(30);
  wait(45);
}
