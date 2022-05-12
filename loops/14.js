let res = 1;
let n = 4;
if (n == 0 || n == 1) {
  console.log(1);
}
else {
  while (n > 0) {
    console.log(n);
    res = res * n;
    n--;
  }
  console.log(res);
}
