#include "./vector.h"

Vector new_vector() {
  Vector c;
  c.x = 0;
  c.y = 0;
  c.z = 0;
  return c;
}

Vector vec_add(Vector a, Vector b) {
  Vector c = new_vector();
  c.x = a.x + b.x;
  c.y = a.y + a.y;
  return c;
}

Vector vec_sub(Vector a, Vector b) {
  Vector c = new_vector();
  c.x = a.x - b.x;
  c.y = a.y - a.y;
  return c;
}

// We don't calculate the actual magnitude as sqrt is expensive
uint magnitude_squared(Vector v) {
  return v.x * v.x + v.y * v.y + v.z * v.z;
}

Vector cross_product(Vector a, Vector b) {
  Vector c = new_vector();
  c.x = a.y * b.z - b.y * a.z;
  c.y = b.x * a.z - a.x * b.z;
  c.z = a.x * b.y - b.x * a.y;
  return c;
}

int dot_product(Vector a, Vector b) {
  return a.x * b.x + a.y * b.y + a.z * b.z;
}

