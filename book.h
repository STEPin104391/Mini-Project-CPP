#ifndef __BOOK_H
#define __BOOK_H
#include<iostream>
#include<string>

class Book {
  int m_isbn;     
  std::string m_title;
  std::string m_author;
  int m_year;      
  double m_price;
  int m_pages;
  public:
  Book();
  Book(int ,std::string ,std::string ,int ,double ,int );
  int getisbn() const;
  int getyear() const;
  int getpages() const;
  double getprice() const;
  std::string gettitle() const;
  std::string getauthor() const;
  void display() const;
};
#endif
