CC=g++
all: tp02.exe

TipoItem.o: TipoItem.cpp include/TipoItem.h
	$(CC) -c TipoItem.cpp -o TipoItem.o

TipoCelula.o: TipoCelula.cpp include/TipoCelula.h
	$(CC) -c TipoCelula.cpp -o TipoCelula.o

ListaEncadeada.o: ListaEncadeada.cpp include/ListaEncadeada.h
	$(CC) -c ListaEncadeada.cpp -o ListaEncadeada.o

No.o: No.cpp include/No.h
	$(CC) -c No.cpp -o No.o

tp02.exe: main.cpp No.o ListaEncadeada.o TipoCelula.o TipoItem.o
	$(CC) No.o ListaEncadeada.o TipoCelula.o TipoItem.o main.cpp -o tp02.exe