CC = g++

testExe : source.o personne.o
	$(CC) -o testExe source.o personne.o

source.o: source.cc
	$(CC) -c source.cc

personne.o: personne.cc
	$(CC) -c personne.cc

clean:
	del *.o
