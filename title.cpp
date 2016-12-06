//Colin Aslett, C++, Period 07
#include <iostream>
#include "movies.h"
#include "vg.h"
#include "parent.h"
#include "music.h"
#include <vector>
#include <cstring>

using namespace std;
void add(vector<Parent*> &xdd);//add function
void search(vector<Parent*> &xdd);//search function
void delt(vector<Parent*> &xdd);//delete function

int main(){
  vector<Parent*> xd;
  bool pop = true;
  while(pop == true){
   cout << "What do you want to do(add,search,delete,quit)" << endl;
   char ans[6];
   cin >> ans;
   if(strcmp(ans,"add")==0){
     add(xd);
   }
   if(strcmp(ans,"search")==0){
     search(xd);
   }
   if(strcmp(ans,"delete")==0){
     delt(xd);
   }
   if(strcmp(ans,"quit")==0){
     pop = false;
     return 0;
   }
  }
  return 0;
}
//adds stuff to the parent vector
void add(vector<Parent*> &xdd){
  cout << "What type of thing do you want to add(vg, music, movie)" << endl;
  char a[10];
  cin >> a;
  //adding for a videogame
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
  //adding for a movie
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
  //adding for music
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
//searching for the contents of the vector
void search(vector<Parent*> &xdd){
  cout << "Do you want to search by title or year" << endl;
  char a[20];
  cin >> a;
  //searching by title
  if(strcmp(a,"title") == 0){
    cout << "enter a title" << endl;
    char b[20];
    cin >> b;
    for(vector<Parent*>::iterator i = xdd.begin();i != xdd.end();i++){
      if((strcmp((*i)->getTitle(),b) == 0)){
	if((*i)->getType() == 1){
	  cout << (*i)->getTitle() << " , " << (*i)->getYear() << " , " << (*i)->getPublisher() << " , " << (*i)->getRating() << endl;
        }
	if((*i)->getType() == 2){
	  cout << (*i)->getTitle() << " , " << (*i)->getYear() << " , " << (*i)->getDirector() << " , " << (*i)->getDuration() << " , " << (*i)->getRating() << endl;
	}
	if((*i)->getType() == 3){
	  cout << (*i)->getTitle() << " , " << (*i)->getYear() << " , " << (*i)->getArtist() << " , " << (*i)->getDuration() << " , " << (*i)->getPublisher() << endl;
	}
      }
    }
  }
  //searching by year 
  if(strcmp(a,"year") == 0){
    cout << "enter a year" << endl;
    int d;
    cin >> d;
    for(vector<Parent*>::iterator i = xdd.begin();i != xdd.end();i++){
      if((*i)->getYear() == d){
	if((*i)->getType() == 1){
	  cout << (*i)->getTitle() << " , " << (*i)->getYear() << " , " << (*i)->getPublisher() << " , " << (*i)->getRating() << endl;
	}
	if((*i)->getType() == 2){
	  cout << (*i)->getTitle() << " , " << (*i)->getYear() << " , " << (*i)->getDirector() << " , " << (*i)->getDuration() << " , " << (*i)->getRating() << endl;
	}
	if((*i)->getType() == 3){
	  cout << (*i)->getTitle() << " , " << (*i)->getYear() << " , " << (*i)->getArtist() << " , " << (*i)->getDuration() << " , " << (*i)->getPublisher() << endl;
	}
      }
    }
  }
}
//delete function, goes through the iterator and deletes the thing that you want
void delt(vector<Parent*> &xdd){
  cout << "Do you want to search by title or year" << endl;
  char c[20];
  cin >> c;
  if(strcmp(c,"title") == 0){
    cout << "enter a title" << endl;
    char d[20];
    cin >> d;
    for(vector<Parent*>::iterator i = xdd.begin();i != xdd.end();i++){
	if(strcmp((*i)->getTitle(),d) == 0){
	  delete *i;
	  xdd.erase(i);
	  break;
	}
    }
  }
  if(strcmp(c,"year") == 0){
    cout << "enter a year" << endl;
    int d;
    cin >> d;
    for(vector<Parent*>::iterator i = xdd.begin();i != xdd.end();i++){
      if((*i)->getYear() == d){
	delete *i;
	xdd.erase(i);
	break;
      }
    }
  }
}











