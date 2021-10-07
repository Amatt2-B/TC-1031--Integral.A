#include <iostream>
#include "chapter.h"
#include "season.h"
#include <sstream>
#include <vector>
#include <cstring>
#include <string>
#include <fstream>

int main() {
  Season season;
  std::cout<<"\nOriginal order: \n";
  std::cout<<season.print();
  std::cout<<"\nSorted chapters by ranking: \n";
  season.sort();
  std::cout<<season.print();
  std::cout<<"\nSorted chapters by number: \n";
  season.sort2();
  std::cout<<season.print();
  
  }
