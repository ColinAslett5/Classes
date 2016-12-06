#include <iostream>
#include "parent.h"
using namespace std;

Parent::Parent(char* newtitle, int newyear){
  title = newtitle;
  year = newyear;
}
char* Parent::getTitle(){
  return title;
}
int Parent::getYear(){
  return year;
}
int Parent::getType(){
  return 0;
}
char* Parent::getDirector(){
  return NULL;
}
int Parent::getDuration(){
  return 0;
}
int Parent::getRating(){
  return 0;
}
char* Parent::getPublisher(){
  return NULL;
}
char* Parent::getArtist(){
  return NULL;
}
