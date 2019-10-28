#include <iostream>
#include <string>
#include <vector>
#include<limits>

void linieMargini()
{
	std::cout << "\t     |     |     \n";
}
void linieMijloc()
{
	std::cout << "\t_____|_____|_____\n";
	std::cout << "\t     |     |     \n";
}
void afisareMat(char mat[3][3]);
void board(char mat[3][3]);
bool isGameEnd(char mat[3][3])
{
	if (mat[0][0] == mat[0][1] && mat[0][1] == mat[0][2] && mat[0][0] != '0') {
		//std::cout << "mat[0][0] == mat[0][1] && mat[0][1] == mat[0][2] && mat[0][0] != '0'\n";
		system("cls");
		board(mat);
		return 1;
	}
	if (mat[1][0] == mat[1][1] && mat[1][1] == mat[1][2] && mat[1][0] != '0') {
		//std::cout << "mat[1][0] == mat[1][1] && mat[1][1] == mat[1][2] && mat[1][0] != '0'\n";
		system("cls");
		board(mat);
		return 1;
	}
	if (mat[2][0] == mat[2][1] && mat[2][1] == mat[2][2] && mat[2][0] != '0') {
		//std::cout << "mat[2][0] == mat[2][1] && mat[2][1] == mat[0][2] && mat[2][0] != '0'\n";
		system("cls");
		board(mat);
		return 1;
	}
	if (mat[0][0] == mat[1][0] && mat[1][0] == mat[2][0] && mat[0][0] != '0') {
		//std::cout << "mat[0][0] == mat[1][0] && mat[1][0] == mat[2][0] && mat[0][0] != '0'\n";
		system("cls");
		board(mat);
		return 1;
	}
	if (mat[0][1] == mat[1][1] && mat[1][1] == mat[2][1] && mat[0][1] != '0') {
		//std::cout << "mat[0][0] == mat[1][0] && mat[1][0] == mat[2][0] && mat[0][0] != '0'\n";
		system("cls");
		board(mat);
		return 1;
	}
	if (mat[0][2] == mat[1][2] && mat[1][2] == mat[2][2] && mat[0][2] != '0') {
		//std::cout << "mat[0][0] == mat[1][0] && mat[1][0] == mat[2][0] && mat[0][0] != '0'\n";
		system("cls");
		board(mat);
		return 1;
	}
	if (mat[0][0] == mat[1][1] && mat[1][1] == mat[2][2] && mat[0][0] != '0') {
		//std::cout << "mat[0][0] == mat[1][1] && mat[1][1] == mat[2][2] && mat[0][0] != '0'\n";
		system("cls");
		board(mat);
		return 1;
	}
	if (mat[2][0] == mat[1][1] && mat[1][1] == mat[0][2] && mat[2][0] != '0') {
		//std::cout << "mat[2][0] == mat[1][1] && mat[1][1] == mat[0][2] && mat[2][0] != '0'\n";
		system("cls");
		board(mat);
		return 1;
	}
	return 0;
}
void board(char mat[3][3]){

			std::cout << "\t  TicTacToe Game\n\n";
			std::cout << " Player 1 = {X} | Player 2 = {O}\n\n";
			linieMargini(); 
			if (mat[0][0] != '0') std::cout << "\t  " << mat[0][0]<<"  |";
			else std::cout << "\t     |";
			if (mat[0][1] != '0') std::cout << "  " << mat[0][1]<<"  |";
			else std::cout << "     |";
			if (mat[0][2] != '0') std::cout << "  " << mat[0][2] << "  " << std::endl;
			else
				std::cout << "     \n";
			linieMijloc();  
			if (mat[1][0] != '0') std::cout << "\t  " << mat[1][0] << "  |";
			else std::cout << "\t     |";
			if (mat[1][1] != '0') std::cout << "  " << mat[1][1] << "  |";
			else std::cout << "     |";
			if (mat[1][2] != '0') std::cout << "  " << mat[1][2] << "  " << std::endl;
			else
				std::cout << "     \n";
			linieMijloc(); 
			if (mat[2][0] != '0') std::cout << "\t  " << mat[2][0] << "  |";
			else std::cout << "\t     |";
			if (mat[2][1] != '0') std::cout << "  " << mat[2][1] << "  |";
			else std::cout << "     |";
			if (mat[2][2] != '0') std::cout << "  " << mat[2][2] << "  " << std::endl;
			else
				std::cout << "     \n";
			linieMargini(); 
			std::cout << std::endl;
	
}
void sw(char mat[3][3],char player,int optiune)
{
	
	switch (optiune)
	{
	case 1:
	{
		mat[0][0] = player;
		break;
	}
	case 2:
	{
		mat[0][1] = player;
		break;
	}
	case 3:
	{
		mat[0][2] = player;
		break;
	}
	case 4:
	{
		mat[1][0] = player;
		break;
	}
	case 5:
	{
		mat[1][1] = player;
		break;
	}
	case 6:
	{
		mat[1][2] = player;
		break;
	}
	case 7:
	{
		mat[2][0] = player;
		break;
	}
	case 8:
	{
		mat[2][1] = player;
		break;
	}
	case 9:
	{
		mat[2][2] = player;
		break;
	}
	}
}
bool exista(std::vector<int> temp,int el)
{
	for (int i = 0; i < temp.size(); i++)
		if (el == temp[i])
			return 1;
	return 0;
}
void afisareMat(char mat[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			std::cout << mat[i][j] << " ";
		std::cout << std::endl;
	}
}
void alegere(char mat[3][3])
{
	char player = 'X';
	std::vector<int> temp;
	while (!isGameEnd(mat))
	{
	
		system("cls");
		std::cout << "Player: " << player << std::endl;
		board(mat);
		start:
		int optiune;
		std::cout << "Alege unul dintre numerele valabile: \n";
		for (int i = 1; i < 10; i++)
		{
			if (!exista(temp, i))
				std::cout << i << " ";
			else
				std::cout << "  ";
			if (i % 3 == 0)std::cout << std::endl;
		}
		if (temp.size() == 9)
		{
			std::cout << "DRAW";
			break;
		}
		do
		{
			std::cout << "Introdu optiunea dorita: ";
			std::cin >> optiune;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
				std::cout << "You have entered wrong input" << std::endl;
				std::cin >> optiune;
			}
			
		} while (optiune < 1 || optiune > 9);
		if(exista(temp,optiune))
			goto start;
		temp.push_back(optiune);
		sw(mat, player, optiune);
		if (player == 'X')
			player = 'O';
		else
			player = 'X';
	}
	std::cout << "END";
}
int main()
{
	
	char mat[3][3] = {'0','0','0','0','0','0','0','0','0' };
	
	std::cout << std::endl;
	alegere(mat);
	
}