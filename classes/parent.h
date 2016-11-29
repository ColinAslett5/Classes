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
};
