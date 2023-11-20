ABR.o: ABR.c ABR.h
	@echo "Compilation de ABR."
	gcc -c ABR.c -o ABR.o -Wall
main.o: main.c ABR.h
	@echo "Compilation du main."
	gcc -c -Wall main.c -o main.o
exe: ABR.o main.o
	@echo "Compilation de l'exécutable."
	gcc ABR.o main.o -o exe
clean:
	@echo "J'ai tout effacé."
	rm -f *.o
