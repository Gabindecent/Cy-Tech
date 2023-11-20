exe: liste.o main.o
	@echo "Compilation de l'exécutable."
	gcc liste.o main.o -o exe

liste.o: liste.c liste.h
	@echo "Compilation de liste."
	gcc -c liste.c -o liste.o -Wall

main.o: main.c liste.h
	@echo "Compilation du main."
	gcc -c -Wall main.c -o main.o

clean:
	@echo "J'ai tout effacé."
	rm -f *.o