#include "file.h"
#include <stdio.h>
#include <stdlib.h>

Personne* creerEltFile(char*){
    FIle f;
    f=malloc(sizeof(Personne)*1);
    f->nom=valeur;
}

File enfiler(File f, char* valeur){
    if(f==NULL){
        elt= creerEltFile(valeur);
        f=elt;
        return f;
    }
    else{
        f->precedent = enfiler(f->precedent, valeur);
        retrun f;
    }
}