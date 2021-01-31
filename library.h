#ifndef __LIBRARY_H
#define __LIBRARY_H
#include<list>
#include "book.h"

class Library {
  std::list<Book> books;
  public:
  void addBook(int, std::string, std::string,int, double, int);
  void removeBookByISBN(int);
  void displayAll();
  Book* findBookByISBN(int);
  bool isBookFound(int); 
  double findAveragePrice();
  Book& findBookwithMaxPages();
  int count();
  int countBooksInPriceRange(int , int ); 
};
#endif
