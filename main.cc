#include <iostream>

#include "vec3.h"
#include "color.h"

int main() {
  int img_width = 255;
  int img_height = 255;

  std::cout << "P3\n" << img_width << ' ' << img_height << "\n255\n";

  for (int j = 0; j < img_height; j++) {
    std::clog << "\rScanlines remaining: " << (img_height - j) << ' ' << std::flush;
    for (int i = 0; i < img_width; i++) {
      auto pixel_color = color(double(i)/(img_width-1), double(j)/(img_height-1), 0);
      write_color(std::cout, pixel_color);
    }
  }

  std::clog << "Done           \n"; 

  return 0;
}
