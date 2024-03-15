#include "enemy.h"
#include "forgot.h"
#include <iostream>

void runEnemy() {
	// TODO -- Supply Villainous Pete some lackeys
	Enemy boss = {"Villainous Pete", "I derive great enjoyment from commiting crimes"};
	const Enemy *enemies[] = {&boss};

	// Don't trust anything they're slingin'
	(void)rollCall(enemies, 1);
}

void runForget() {
	while(forgetMeNot());
}

int main() {
	std::cout << "------MOLTEN------" << std::endl;
	// TODO -- Add some interaction here, some zest
	runForget();
	std::cout << "----END MOLTEN----" << std::endl;

	return 0;
}
