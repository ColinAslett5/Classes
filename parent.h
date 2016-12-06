#include <iostream>
#pragma once
using namespace std;

class Parent{
 private:
  char* title;
  int year;
 public:
  Parent(char* title, int year);
  char* getTitle();
  int getYear();
  virtual int getType();
  virtual char* getDirector();
  virtual int getDuration();
  virtual int getRating();
  virtual char* getPublisher();
  virtual char* getArtist();
};
