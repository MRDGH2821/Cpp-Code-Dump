#include <simplecpp>
main_program {
  initCanvas();
  Turtle t1, t2;
  t1.right(60);
  t2.right(120);
  t1.forward(100);
  t2.forward(100);
  t1.right(30);
  t2.left(30);
  t1.forward(100);
  t2.forward(100);
  t2.left(90);
  t2.forward(100);
  t1.left(90);
  t2.forward(100);
  t1.forward(100);
  t2.left(90);
  t1.left(90);
  t1.forward(190);
  t2.forward(100);
  t2.left(90);
  t2.forward(200);
  t1.left(90);
  t1.forward(150);
  t2.right(120);
  t2.forward(50);
  repeat(360) {
    t2.forward(0.5);
    t2.right(1);
  }
  wait(50);
}
