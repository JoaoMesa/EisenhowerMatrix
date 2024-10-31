all:
	g++ -o bin/eisen.o src/main.cpp src/card.cpp src/eisenhower_matrix.cpp src/quarters.cpp src/file_manager.cpp

clean:
	rm -r *.o