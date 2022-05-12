size(400,400);
int n = parseInt(args[0]);
float x1,y1,x2,y2;
x1 = 0,0;
x2 = 0,0;
y1 = 0,0;
y2 = 0,0;
background(255);
line(0,200,400,200); // eje x
line(200,0,200,400); // eje y

float range = width/n;

while (x1 < width) {
  y1 = (float) Math.sin(x1);
  println(y1);
  x1 += range;
  y2 = (float) Math.sin(x2);
  println(y2);
  line(x1,y1,x2,y2);
  x1 = x2
}
