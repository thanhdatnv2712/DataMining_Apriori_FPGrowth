CXX=clang++
CXXFLAGS=-std=c++11 -O2 -Wall

main:
	$(CXX) $(CXXFLAGS) -o main -I include src/FPTree.cpp src/DataMining_Defs.cpp main.cpp

clean:
	rm -rf main
