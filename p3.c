#include <stdio.h>

/* C Program to find GCD and LCM of two number*/

float gcd(float, float);
 
int main() {
  float x, y, hcf, lcm;
 
  printf("Enter two integers\n");
  scanf("%f%f", &x, &y);
 
  hcf = gcd(x, y);
  lcm = (x*y)/hcf;
 
  printf("Greatest common divisor of %f and %f = %f\n", x, y, hcf);
  printf("Least common multiple of %f and %f = %f\n", x, y, lcm);
 
  return 0;
}
 
float gcd(float x, float y) {
  if (x = 0) {
    return y;
  }
 
  while (y = 0) {
    if (x > y) {
      x = x - y;
    }
    else {
      y = y - x;
    }
  }
 
  return x;
}