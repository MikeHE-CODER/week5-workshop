#ifndef MUSICIAN_H
#define MUSICIAN_H
#include <iostream>
using namespace std;
#include <string>

class Musician {
private:
  int year;
  string instrument;

public:
  Musician() : year(0), instrument("null"){};
  Musician(std::string instrument, int experience)
      : year(experience), instrument(instrument){};
  std::string get_instrument() { return instrument; }
  int get_experience() { return year; }
};

#endif
