#include <iostream>
#include "parent.h"

using namespace std;

class Vg : public Parent{
 private:
  char* publisher;
  int rating;
 public:
  Vg(char* publisher, int rating, char* title, int year);
  char* getPublisher();
  int getRating();
  virtual int getType();
};
