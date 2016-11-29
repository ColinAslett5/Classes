//Colin Aslett, C++, Period 07
#include <iostream>
#include "movies.h"
#include "vg.h"
#include "parent.h"
#include "music.h"
#include <vector>
#include <cstring>

using namespace std;
void add(vector<Parent*> &xdd);
void search(vector<Parent*> &xdd);

int main(){
  vector<Parent*> xd;
  bool poop = true;
  while(poop = true){
   cout << "What do you want to do(add,search)" << endl;
   char ans[6];
   cin >> ans;
   if(strcmp(ans,"add")==0){
     add(xd);
   }
   if(strcmp(ans,"search")==0){
     search(xd);
   }
   if(strcmp(ans,"quit")==0){
     poop = false;
   }
  }
  return 0;
}
void add(vector<Parent*> &xdd){
  cout << "What type of thing do you want to add(vg, music, movie)" << endl;
  char a[10];
  cin >> a;
  if(strcmp(a,"vg") == 0){
    cout << "enter publisher, rating, title, year" << endl;
    char* title = new char[20];
    int year;
    char* publisher = new char[20];
    int rating;
    cin >> publisher;
    cin >> rating;
    cin >> title;
    cin >> year;
    Vg* temp = new Vg(publisher, rating, title, year);
    xdd.push_back(temp);
  }
  if(strcmp(a,"movie") == 0){
    cout << "enter director, duration, rating, title, year" << endl;
    char* title = new char[20];
    int year;
    char* director = new char[20];
    int duration;
    int rating;
    cin >> director;
    cin >> duration;
    cin >> rating;
    cin >> title;
    cin >> year;
    Movies* temp = new Movies(director, duration, rating, title, year);
    xdd.push_back(temp);
  }
  if(strcmp(a,"music") == 0){
    cout << "enter artist, duration, publisher, title, year" << endl;
    char* artist = new char[20];
    int duration;
    char* publisher = new char[20];
    char* title = new char[20];
    int year;
    cin >> artist;
    cin >> duration;
    cin >> publisher;
    cin >> title;
    cin >> year;
    Music* temp = new Music(artist, duration, publisher, title, year);
    xdd.push_back(temp);
  }
}
void search(vector<Parent*> &xdd){
  //cout << "search";
}











