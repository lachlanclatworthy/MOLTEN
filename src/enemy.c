/* enemy.c */

#include "enemy.h"
#include <stdio.h>
#include <errno.h>
#include <assert.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

bool heHasEnemies(size_t enemyCount) {
	return enemyCount > 0;
}

char *amplify(const char *phrase, char *buf) {
	for (int i = 0; i < strlen(phrase); i++) {
		buf[i] = toupper(phrase[i]);
	}

	return buf;
}

/* Let 'em know the score */
int rollCall(const Enemy *rogues[], size_t galleryLength) {
	assert(heHasEnemies(galleryLength));

	// TODO -- Get the fellas some vocal coaching!
	static const char *opener = "sound off lads!";
	char *headRoom = (char *)malloc(strlen(opener));
	puts(amplify(opener, headRoom));

	for (size_t i = 0; i < galleryLength; i++) {
		const Enemy *e = rogues[i]; // Center stage!
		printf("Name's %s! %s\n", e->callSign, e->catchPhrase);
	}

	free(headRoom); // Blew out the PA...

	return EBADMSG;
}
