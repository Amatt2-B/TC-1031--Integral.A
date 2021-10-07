  
#ifndef CHAPTER
#define CHAPTER

#include <string>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>

class Chapter{
  private:
  std::string number;
  int ranking;
  public:
  Chapter(std::string,int);
  std::string print();
  int getRanking();
  std::string getNumber();
};

Chapter::Chapter(std::string _number ,int _ranking){
  number=_number;
  ranking=_ranking;
}

std::string Chapter::print(){
  std::stringstream sstm;
  sstm <<"The Chapter "<< number << " has a ranking of "<<ranking<<'\n';
  std::string result = sstm.str();
  return result;
}

int Chapter::getRanking(){
  return ranking;
}

std::string Chapter::getNumber(){
  return number;
}



#endif
