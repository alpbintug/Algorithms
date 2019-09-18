## Euclidean Algorithm

Euclidean Algorithm is used to find the greatest common divisor (GCD) of two given integers.

Way this algorithm works is;

Let there be two numbers A and B.

While A mod B is not equal to zero, we will assign A mod B to B, and old value of the B to A. When we reach the value B = 0, this means A = GDC.


Here is a step by step example;

```
A=20, B=15
A mod B = 5, 5!=0, A = 15, B = 5
A mod B = 0, 0 = 0, A = 5, B = 0

GDC = 5

A = 32, B = 17
A mod B = 15, 15!=0, A= 17, B = 15
A mod B = 2, 2!=0, A= 15, B = 2
A mod B = 1, 1!=0, A= 2, B = 1
A mod B = 0, 0=0, A= 1, B = 0

GDC = 1
```
