#include <iostream>
#include "music.h"
#include "parent.h"

using namespace std;

Music::Music(char* newartist, int newduration, char* newpublisher, char* newtitle, int newyear) : Parent(newtitle, newyear){
  artist = newartist;
  duration = newduration;
  publisher = newpublisher;
}
char* Music::getArtist(){
  return artist;
}
int Music::getDuration(){
  return duration;
}
char* Music::getPublisher(){
  return publisher;
}
