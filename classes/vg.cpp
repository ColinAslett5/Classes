#include <iostream>
#include "vg.h"
#include "parent.h"
using namespace std;

Vg::Vg(char* newpublisher, int newrating, char* newtitle, int newyear) : Parent(newtitle, newyear){
  publisher = newpublisher;
  rating = newrating;
}
char* Vg::getPublisher(){
  return publisher;
}
int Vg::getRating(){
  return rating;
}
