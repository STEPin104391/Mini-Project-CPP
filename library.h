#ifndef __LIBRARY_H
#define __LIBRARY_H
#include<list>
#include "book.h"

class Library
{
  std::list<Book> books;
  public:
  void addBook(int, std::string, std::string,int, double, int);
  void removeBookByISBN(int);
  void displayAll();
  void findBookByISBN(int);
  void count();
};
#endif
