exe: arbre.o main.o
	@echo "Compilation de l'exécutable."
	gcc arbre.o main.o -o exe
 arbre.o: arbre.c arbre.h
	@echo "Compilation de arbre."
	gcc -c arbre.c -o arbre.o -Wall

main.o: main.c arbre.h
	@echo "Compilation du main."
	gcc -c -Wall main.c -o main.o

clean:
	@echo "J'ai tout effacé."
	rm -f *.o