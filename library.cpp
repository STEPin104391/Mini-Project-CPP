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
}

void Library::findBookByISBN(int keyIsbn)
{
     std::list<Book>::iterator iter;
      for(iter = books.begin();iter!=books.end();iter++)
      {
           if(iter->getisbn()==keyIsbn)
              iter->display();
              break;
      }
}

void Library::removeBookByISBN(int keyIsbn) {
       std::list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); iter++)
       if(iter->getisbn() == keyIsbn)
          break;
   if(iter!=books.end())
     books.erase(iter);
}

inline void Library::count()
{
    std::cout<<"\n\tNo of books available:"<<books.size()<<"\n\t";
}

int main()
{
    Library b;
    int n;
    char exit='n';
    while(exit!='y')
    {
    std::cout<<"\n\t 1.To add book"
        <<"\n\t 2.To view all the book details"
        <<"\n\t 3.To find book by Isbn"
        <<"\n\t 4.To remove book by ISBN"
        <<"\n\t 5.To know no of books available in library"
        <<"\n\t 6.To exit";
    std::cout<<"\n\tEnter Your choice:";
    std::cin>>n;

     switch(n)
     {
     case 1:
        {
         int year,pages,isbn;
         std::string Title,author;
         float price;
       std::cout<<"\n\tEnter isbn,Title,author,year,price,pages:";
       std::cin>>isbn;
       std::cin>>Title;
       std::cin>>author;
       std::cin>>year;
       std::cin>>price;
       std::cin>>pages;
       b.addBook(isbn,Title,author,year,price,pages);
       break;
        }

     case 2:
         b.displayAll();
         break;

     case 3:
         {
         int isbn;
         std::cout<<"\n\tEnter isbn:";
         std::cin>>isbn;
         b.findBookByISBN(isbn);
         break;
         }

     case 4:
         {
         int isbn;
         std::cout<<"\n\tEnter isbn:";
         std::cin>>isbn;
         b.removeBookByISBN(isbn);
         break;
         }

     case 5:
         b.count();
         break;

     case 6:
         exit='y';
         break;
     }
    }
}
