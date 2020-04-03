#pragma once
#include <string>

class Box {
 public:
  Box(std::string n);

  std::string name;
  int width;
  int height;

  void bigger();

  void smaller();

  int getValue();
};