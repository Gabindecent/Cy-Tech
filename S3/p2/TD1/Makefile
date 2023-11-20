exe: f.o main.o
    gcc -Wall f.o main.o -o exe

f.o: mesFonctions.h mesFonctions.c
    gcc Wall -c mesFonctions.c  -o f.o

main.o: main.c mesFonctions.h
    gcc -Wall -c main.c -o main.o