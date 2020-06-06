
CXX = g++

main.exe: main.o Solution.o
	$(CXX) -o main.exe main.o Solution.o
	
main.o: main.cpp Solution.h
	$(CXX) -c main.cpp

Solution.o: Solution.cpp Solution.h
	$(CXX) -c Solution.cpp -lm

clean:
	rm -f *.o