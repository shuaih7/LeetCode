
CXX = g++

main.exe: main.o TwoSum.o
	$(CXX) -o main.exe main.o TwoSum.o
	
main.o: main.cpp TwoSum.h
	$(CXX) -c main.cpp

TwoSum.o: TwoSum.cpp TwoSum.h
	$(CXX) -c TwoSum.cpp

clean:
	del *.o

