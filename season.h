#ifndef SEASON
#define SEASON

#include <string>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>
#include <fstream>

#include "chapter.h"


class Season{
  private:
  void swap(int,int);
  std::vector<Chapter*> chapters;
  public:
  Season();
  std::string print();
  void sort();
  void sort2();
};

Season::Season(){
  std::vector <std::string> vec;
  std::string line;
  std::ifstream myfile ("MoneyHeist.csv");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      vec.clear();
      std::stringstream ss(line);
      while( ss.good() )
        {
            std::string substr;
            getline( ss, substr, ',' );
            vec.push_back( substr );
        }
      std::string name=vec[0];
      std::stringstream s(vec[1]);

      int ranking = 0;
      s >> ranking;
      Chapter* ptr=new Chapter(number,ranking);
      chapters.push_back(ptr);
    }
    myfile.close();
  }
  else {
    std::cout << "Unable to open file"; 
  }
}

  std::string Season::print(){
    std::vector<Chapter*>::iterator i;
    std::string x;
    std::string msg="";
    for(i = chapters.begin(); i != chapters.end(); ++i)
      {
      // Methos of the pointer i 
      msg=msg+x;
      x=(*i)->print();
      }
    return msg;
  }

  void Season::swap(int i, int j) {
    Chapter* aux = chapters[i];
    chapters[i] = chapters[j];
    chapters[j] = aux;
  }
  void Season::sort(){
    for (int i=0;i<chapters.size();i++){
    int j=i;
      while (j>0 && chapters[j]->getRanking()<chapters[j-1]->getRanking()){
        swap(j,j-1);
        j=j-1;
      }
    }
  }

   void Season::sort2(){
    for (int i=0;i<chapters.size();i++){
    int j=i;
      while (j>0 && chapters[j]->getNumber()<chapters[j-1]->getNumber()){
        swap(j,j-1);
        j=j-1;
      }
    }
  }

  


#endif
