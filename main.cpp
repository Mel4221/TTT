#include <iostream>
#include <string>
#include <fstream>
#include <QuickTools.h>
using namespace std;

class TTT
{
	/*
       X  | O |	 X
       ___|___|___
          |   |
       X  | X |  O
       ___|___|___
	  |   |
       O  | O |  X
	 */
	public: char Map[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '}; 
	public: char PlayerChar[2] = {'X','O'}; 
	public: int CurrentPlayer; 
	public: const int MaxMove = 9; 
	public: bool FillWithNumber = false; 
	private: int MovesCount = 0; 
	private: bool PlayerWon; 
	
	public: void PrintMap()
		{
			 
			if(FillWithNumber)
			{
 				for(int ch = 0; ch < 9; ch++)
				{
					if(Map[ch] != ' ')
					{
						Map[ch] = ch; 
					}
				}
			}
			printf("\t%c  | %c |  %c\n",Map[0],Map[1],Map[2]);  
			printf("\t___|___|___\n"); 
		 	printf("\t   |   | \n");  
			printf("\t%c  | %c |  %c\n",Map[3],Map[4],Map[5]);
			printf("\t___|___|___\n"); 
			printf("\t   |   |\n");
			printf("\t%c  | %c |  %c\n",Map[6],Map[7],Map[8]);

		}
	private: bool IsValidMove(int position)
		 {
			 /*
			cout << "Position: ";
		       	if(MovesCount > MaxMove){
				return false; 
			}
			return true; 
			char temp[1]; 
			*/
			if(Map[position] != ' '){
				return false;
			}
			/*
			if(position < 0){
				return false;
			}if(position > 10){
				return false; 
			}*/
			else{
				return true; 
			}
		 }

	
	private: void GameLoop()
		 {
			int position; 
			//int flip; 
			bool badChar = false; 
			//cout << Map[0]; 
			//cin >> position; 
			PrintMap(); 
			while(PlayerWon == false)
			{
			  	
				cout << "Player 1: "; 
				cout << PlayerChar[0];
			       	cout << "\t"; 
				cout << "Player 2: "; 
				cout << PlayerChar[1] << endl;	
				cout << "Player Tourn: "; 
				cout << PlayerChar[CurrentPlayer-1] << endl;
				cout << "> "; 
				cin >> position;
				cout << "Is a Valid Move: "; 
				cout << IsValidMove(position); 
				cout << " ?"<< endl; 
				if(true)
				{
					position = position == 0? 1:position; 
					Map[position-1] = PlayerChar[CurrentPlayer-1];  
					CurrentPlayer = CurrentPlayer == 1? 2:1;	 
					MovesCount++; 
					//cout <<
					PrintMap();  
				}
			}
 	
		 }
	public: void Play()
		{
			CurrentPlayer = 1;
			PlayerWon = false; 
			GameLoop(); 	
		}		
}; 

int main()
{
	TTT tic; 
	tic.FillWithNumber = true; 
	tic.Play(); 
return 0; 
}
