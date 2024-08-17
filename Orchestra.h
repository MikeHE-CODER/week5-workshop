#ifndef Orchestra_h
#define Orchestra_h
#include "Musician.h"
#include <iostream>
#include <string>
using namespace std;
class Orchestra {
private:
  int size;
  Musician *musicians;
  int number = 0;

public:
  Orchestra() : size(0), musicians(nullptr) {} // default constructor
  Orchestra(int size)
      : size(size), musicians(new Musician[size]) {
  } // constructor for an orchestra of given size

  // returns the number of musicians who have joined the orchestra
  int get_current_number_of_members() { return number; }

  // returns true if any musician in the orchestra plays the specified
  // instrument otherwise returns false
  bool has_instrument(std::string instrument) {
    for (int i = 0; i < size; i++) {
      if (musicians[i].get_instrument() == instrument) {
        return true;
      }
    }
    return false;
  };

  Musician *get_members() {
    return musicians;
  } // returns the array of members of the orchestra

  // returns true and adds new musician to the orchestra if the orchestra is not
  // full otherwise returns false
  bool add_musician(Musician new_musician) {
    if (number >= size) {
      return false;
    } else {
      musicians[number] = new_musician;
      number++;
      return true;
    }
  };

  ~Orchestra() { delete[] musicians; };
};
#endif
