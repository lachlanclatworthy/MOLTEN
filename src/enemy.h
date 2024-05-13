/* enemy.h */

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Enemy {
	const char *callSign;
	const char *catchPhrase;
} Enemy;

int rollCall(const Enemy *rogues[], size_t galleryLength);

#ifdef __cplusplus
}
#endif
