#include <iostream>
#include "parent.h"

using namespace std;

class Music : public Parent{
 private:
  char* artist;
  int duration;
  char* publisher;
 public:
  Music(char* artist, int duration, char* publisher, char* title, int year);
  char* getArtist();
  int getDuration();
  char* getPublisher();
};
