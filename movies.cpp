#include <iostream>
#include "movies.h"
#include "parent.h"

using namespace std;

Movies::Movies(char* newdirector, int newduration, int newrating, char* newtitle, int newyear) : Parent(newtitle, newyear){
  director = newdirector;
  duration = newduration;
  rating = newrating;
}
char* Movies::getDirector(){
  return director;
}
int Movies::getDuration(){
  return duration;
}
int Movies::getRating(){
  return rating;
}
int Movies::getType(){
  return 2;
}

