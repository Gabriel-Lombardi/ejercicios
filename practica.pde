size(400,400);
println(args.length);
println(args[0]);    // diametro
// println(args[1]);   // lo mismo que argv[2]
int diametro = parseInt(args[0]);
// codigo
background(0);
ellipseMode(CORNER);
for (int x = 0; x < width; x += diametro) {
  for (int y = 0; y < height; y += diametro) {
    ellipse(x,y,diametro,diametro);
  }
}
// ellipse(30,30,50,50)
save("argumentos.png");
