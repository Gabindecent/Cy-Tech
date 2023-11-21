exe: file.o main.o
	@echo "Compilation de l'exécutable."
	gcc file.o main.o -o exe

file.o: file.c file.h
	@echo "Compilation de file."
	gcc -c file.c -o file.o -Wall

main.o: main.c file.h
	@echo "Compilation du main."
	gcc -c -Wall main.c -o main.o

clean:
	@echo "J'ai tout effacé."
	rm -f *.o