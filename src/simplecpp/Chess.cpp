#include <simplecpp>
main_program {
  turtleSim();
  // Chessboard
  repeat(4) {
    forward(200);
    left(90);
    wait(2);
  };

  repeat(4) {
    forward(25);
    left(90);
    wait(2);
    forward(200);
    right(90);
    wait(2);
    forward(25);
    right(90);
    wait(2);
    forward(200);
    left(90);
    wait(2);
  };

  repeat(4) {
    left(90);
    wait(2);
    forward(25);
    left(90);
    wait(2);
    forward(200);
    right(90);
    wait(2);
    forward(25);
    right(90);
    wait(2);
    forward(200);
    wait(2);
  };
  wait(5);
}
