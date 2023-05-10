#include <iostream>
#include <cstdlib>
#include <ctime>
#include "windows.h"
#include "Header.h"

entities Hero;
int main() {
	setlocale(LC_ALL, "Russian");
	Setup();
	cont();
	
	int cem_result = cemetary();
	int old_mine_result;
	if (cem_result == 11) {
		
		sell_medalion(1);
		old_mine_result=old_mine(0);
		ruins(0, old_mine_result);
	}

	else
		if (cem_result == 12) {
			
			grandD(1);
			old_mine_result=old_mine(1);
			ruins(1, old_mine_result);
		}

		else
			if (cem_result == 21) {
				
				sell_medalion(0);
				old_mine_result=old_mine(0);
				ruins(0, old_mine_result);
			}

			else
				if (cem_result == 22) {
					grandD(0);
					old_mine_result=old_mine(1);
					ruins(1, old_mine_result);
				}
	
	
	


	







	return 0;
}