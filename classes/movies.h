#include <iostream>
#include "parent.h"

using namespace std;

class Movies : public Parent{
 private:
  char* director;
  int duration;
  int rating;
 public:
  Movies(char* director, int duration, int rating, char* title, int year);
  char* getDirector();
  int getDuration();
  int getRating();
};
