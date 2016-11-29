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
