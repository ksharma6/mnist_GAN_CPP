#include "lib/libtorch/include/ATen/ATen.h"
#include <iostream>

int main() {
  at::Tensor tensor = at::rand({2, 3});
  std::cout << tensor << std::endl;
}
