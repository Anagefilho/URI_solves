#include <stdio.h>
#include <stdlib.h>
int main(){ 

	char class1 [30], class2 [30], class3 [30];
    	gets (class1);
    	gets (class2);
    	gets (class3);
    	    
    	    if (strcmp(class1, "vertebrado") == 0 && strcmp(class2, "ave") == 0 && strcmp(class3, "carnivoro") == 0){
        		printf("aguia\n");
        		}
        	if (strcmp(class1, "vertebrado") == 0 && strcmp(class2, "ave") == 0 && strcmp(class3, "onivoro") == 0){
        		printf("pomba\n");
        	}
        	if (strcmp(class1, "vertebrado") == 0 && strcmp(class2, "mamifero") == 0 && strcmp(class3, "onivoro") == 0){
        		printf("homem\n");
        	}
        	if (strcmp(class1, "vertebrado") == 0 && strcmp(class2, "mamifero") == 0 && strcmp(class3, "herbivoro") == 0){
        		printf("vaca\n");
        	}
        	if (strcmp(class1, "invertebrado") == 0 && strcmp(class2, "inseto") == 0 && strcmp(class3, "hematofago") == 0){
        		printf("pulga\n");
        	}	
        	if (strcmp(class1, "invertebrado") == 0 && strcmp(class2, "inseto") == 0 && strcmp(class3, "herbivoro") == 0){
        		printf("lagarta\n");
        	}
        	if (strcmp(class1, "invertebrado") == 0 && strcmp(class2, "anelideo") == 0 && strcmp(class3, "hematofago") == 0){
        		printf("sanguessuga\n");
        	}
        	if (strcmp(class1, "invertebrado") == 0 && strcmp(class2, "anelideo") == 0 && strcmp(class3, "onivoro") == 0){
        		printf("minhoca\n");
        	}
	return 0;
}
