exe: pile.o main.o
	@echo "Compilation de l'exécutable."
	gcc pile.o main.o -o exe

pile.o: pile.c pile.h
	@echo "Compilation de pile."
	gcc -c pile.c -o pile.o -Wall

main.o: main.c pile.h
	@echo "Compilation du main."
	gcc -c -Wall main.c -o main.o

clean:
	@echo "J'ai tout effacé."
	rm -f *.o