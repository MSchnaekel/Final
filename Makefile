all: count
	
	g++ final.cc
	rm -rf a.out

count: final.o
	
	g++ final.cc -o count 
	
final.o: final.cc
	
	g++ -c final.cc

make doc:
	
	doxygen final.cc

make check:

	g++ final.cc
	valgrind --leak-check=full ./a.out
	cppcheck final.cc
	
clean:
	rm -rf final *.o a.out count html latex
