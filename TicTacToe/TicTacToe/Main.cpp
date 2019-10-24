#include <iostream>
#include <string>

char square[10] = { 'o','1','2','3','4','5','6','7','8','9' };

void board(){

			std::cout << "\t  TicTacToe Game\n\n";
			std::cout << " Player 1 = {X} | Player 2 = {O}\n\n";
			std::cout << "\t     |     |     \n";

			std::cout << "\t  "<<square[1]<<"  |  "<<square[2]<<"  | " << square[3] <<" \n";

			std::cout << "\t_____|_____|_____\n";
			std::cout << "\t     |     |     \n";

			std::cout << "\t  " << square[4] << "  |  " << square[5] << "  | " << square[6] << " \n";

			std::cout << "\t_____|_____|_____\n";
			std::cout << "\t     |     |     \n";

			std::cout << "\t  " << square[7] << "  |  " << square[8] << "  | " << square[9] << " \n";

			std::cout << "\t     |     |     \n";
	
}
int main()
{
	board();
}