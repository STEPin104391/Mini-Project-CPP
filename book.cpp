  #include "book.h"

  Book::Book():m_isbn(),m_title(""),m_author(""),m_year(),m_price(),m_pages(){}

  Book::Book(int m_isbn,std::string m_title,std::string m_author,int m_year,double m_price,int m_pages):m_isbn(m_isbn),m_title(m_title),m_author(m_author),m_year(m_year),m_price(m_price),m_pages(m_pages){}

  int Book::getisbn() const
  {
    return m_isbn;
  }

  int Book::getyear() const
  {
    return m_year;
  }

  int Book::getpages() const
  {
    return m_pages;
  }

  double Book::getprice() const
  {
      return m_price;
  }

  std::string Book::gettitle() const
  {
      return m_title;
  }

  std::string Book::getauthor() const
  {
      return m_author;
  }

  void Book::display() const
  {
    std::cout<<"\n\tisbn:"<<m_isbn
        <<"  m_title:"<<m_title
        <<"  m_author:"<<m_author
        <<"  m_year:"<<m_year
        <<"  m_price:"<<m_price
        <<"  m_pages:"<<m_pages<<std::endl;
  }
