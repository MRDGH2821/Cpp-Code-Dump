#include <simplecpp>

main_program {
  turtleSim();
  forward(120);
  left(90);
  forward(150);
  left(45);
  forward(85);
  left(90);
  forward(85);
  left(45);
  forward(150);
  left(90);
  penUp();
  forward(40);
  left(90);
  penDown();
  forward(60);
  right(90);
  forward(40);
  right(90);
  forward(60);
  right(90);
  forward(20);
  right(90);
  penUp();

  forward(120);
  penDown();
  right(90);
  repeat(360) {
    forward(0.1);
    left(1);
  }

  penUp();
  right(90);
  forward(120);
  left(90);
  forward(20);
  penDown();
  forward(90); // outer rectangle
  forward(60);
  left(90);
  forward(150);
  wait(2);
  left(45);
  forward(80);
  left(45);
  forward(120);
  left(90);
  left(90);
  penUp();
  forward(120);
  right(45);
  penDown();
  forward(80);
  right(135);
  forward(220);
  wait(20);
}
