g++ -c -fPIC -march=native -Wall -Wextra src/vec.cpp -o bin/comp/vec.o
g++ -c -fPIC -march=native -Wall -Wextra src/ext.cpp -o bin/comp/ext.o
ar rcs bin/libmari.a bin/comp/vec.o bin/comp/ext.o