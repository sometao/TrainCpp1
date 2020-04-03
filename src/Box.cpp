#include "..\include\Box.h"

Box::Box(std::string n) : name(n) {
  height = 100;
  width = 100;
}

void Box::bigger() {
  width = width * 1.1;
  height = height * 1.1;
}

void Box::smaller() {
  width = width * 0.9;
  height = height * 0.9;
}

int Box::getValue() { return width * height; }
