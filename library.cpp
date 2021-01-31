#include "library.h"

void Library::addBook(int isbn, std::string title, std::string author, 
                            int year, double price, int pages) {
    //Book temp(isbn, title, author, year, price, pages);
    //books.push_back(temp);                            
    
    //books.push_back(Book(isbn, title, author, year, price, pages));
    
    books.emplace_back(isbn, title, author, year, price, pages);
}

void Library::displayAll() {
   std::list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter)
       iter->display();
   //for(Book& ref:books)
   //       ref.display();
}

Book* Library::findBookByISBN(int keyIsbn) {
     std::list<Book>::iterator iter;
      for(iter = books.begin();iter!=books.end();iter++)
      {
           if(iter->getisbn()==keyIsbn)
              return &(*iter); 
      }
     return nullptr;
}

bool Library::isBookFound(int keyIsbn) {
       std::list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter)
       if(iter->getisbn() == keyIsbn)
          break;

   if(iter!=books.end())
     return true;
   else
     return false;
}
void Library::removeBookByISBN(int keyIsbn) {
       std::list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter)
       if(iter->getisbn() == keyIsbn)
          break;
   if(iter!=books.end())
     books.erase(iter);
}
double Library::findAveragePrice() {
       std::list<Book>::iterator iter;
  double totalPrice=0;
  for(iter=books.begin(); iter!=books.end(); ++iter)
     totalPrice += iter->getprice();
  return totalPrice/books.size();
}

int Library::countBooksInPriceRange(int minVal, int maxVal) {
       std::list<Book>::iterator iter;
  int count=0;
  for(iter=books.begin();iter!=books.end();iter++)
  {
    if(iter->getprice() >= minVal && iter->getprice() <=maxVal)
        count+=1;
  }
  return count;
}

Book& Library::findBookwithMaxPages() {
    std::list<Book>::iterator iter;
     iter = books.begin();
     auto maxIter=iter;
  double maxPrice=iter->getprice();
  ++iter;
  for(;iter!=books.end(); ++iter)
    if(iter->getprice() > maxPrice) {
        maxPrice = iter->getprice();
        maxIter = iter;
    }
    return *maxIter;
}

int Library::count()
{
    return books.size();
}

int main()
{
    Library b;
    b.addBook(12345,"C tutorial","Naveen",2020,300.00,150);//isbn,title,author,year,price,pages
    b.addBook(12346,"Cpp tutorial","Naveen kumar",2021,600.00,200);
    b.addBook(12347,"Java programming","Kumar",2022,600.00,300);
    b.displayAll();
    b.findBookByISBN(12346);
    b.isBookFound(12345);
    b.count();

}
