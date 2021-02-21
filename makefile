a.out: book.cpp library.cpp
	g++ book.cpp library.cpp -o a.out
test:
	./a.out