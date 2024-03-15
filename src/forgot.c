/* forgot.c */

#include "forgot.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void swap(int*, int*);
void cleanAll(void);
void cleanUp(void *);

const char *TO_FORGET = "Made modern and yet never not forgotten. He waits at the door, pours below, seaps closer";
char *forgot = NULL;
int *order = NULL;

/* Pay ponder to zest, pen the top melodic */
bool forgetMeNot(void) {
	static bool beenHereBefore = false;
	static int i = 0;
	static int SEED = 0xFACE;

	// Doesn't count null character
	const int toNot = strlen(TO_FORGET);
	const int toCopy = toNot+1;

	if (!beenHereBefore) {
		srand(SEED);

		forgot = malloc(toCopy*sizeof(char));

		// There's better ways to do this...
		for (int k = 0; k < toCopy; k++) {
			forgot[k] = TO_FORGET[k];
		}

		// This was a terrible decision
		order = malloc(toNot*sizeof(int));

		for (int j = 0; j < toNot; j++) {
			order[j] = j;
		}

		// Then shuffle
		for (int j = 0; j < toNot; j++) {
			swap(&order[j], &order[rand() % toNot]);
		}

		beenHereBefore = true;
	}

	printf("%s\n", forgot);

	// Skip whitespace
	while ((i < toNot) && isblank(forgot[order[i]])) {
		i++;
		continue;
	}

	forgot[order[i]] = ' ';
	i++;

	if (i < toNot) {
		// The fade still beckons
		return true;
	}
	printf("****THE FADE HAS CONSUMED****\n");

	// The fade consumes
	cleanAll();
	beenHereBefore = false;
	SEED++;
	i = 0;

	return false;
}

void cleanAll(void) {
	cleanUp(forgot);
	cleanUp(order);
}

void cleanUp(void *target) {
	if (target) {
		free(target);
		target = NULL;
	}
}

void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp; 
}
