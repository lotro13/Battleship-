#include "pch.h"

// Ship - length, hp, x, y, rotation, 
// Field - 10x10 '~'
// Animation '*' 'o' 'O'  x, y, end_char
// Player
// Enemy


int main()
{
	char field[10][10];
	
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			field[i][j] = '~';
	console C;
	while (true) {
		C.print();
	}
	// Phase 1: Menu
	// Phase 2: Ship placement
	// Phase 3: Turn based gameplay
	// Phase 4: SOSAT
	
	return 0;
}