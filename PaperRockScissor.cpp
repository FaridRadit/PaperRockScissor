#include <iostream>
#include <cstdlib>
using namespace std;
int compinp,playinp;
string playername,winner;
bool cond=false;
//1.Computer And Player
void computer () {
	cout<<"\tComputer Turns !"<<endl;
	compinp=rand()%3;
	cout<<"\tComputer has chosen its choice\n\n"<<endl;
}
void player (){
	cout<<playername<<" \tTurns !"<<endl;
	cout<<"\tChoose (paper (1),Rock (2) ,Scissor(3) : ";
	cin >>playinp;
}
//2.Paper (1) Scissor (2) Rock (3)
//3.Win Condition Tie Condition Lose Condition
void condition() {
	cout<<"\t"<<string(20,'=')<<endl;
	cout<<"\tGame Start"<<endl;
	cout<<"\t"<<string(20,'=')<<endl;
	computer();
	player();
	cout<<"\n\n";
	if (playinp==1 && compinp==2){
		winner=playername;
		cout<<"\tThe Winner Is "<<winner<<endl;
		cond=true;
	}
		else if (playinp==1 && compinp==3){
		winner="computer";
		cout<<"\tThe Winner Is "<<winner<<endl;
		cond=true;
	}
		else if (playinp==1 && compinp==1){
		winner="Tie";
		cout<<"\tThe Winner Is "<<winner<<endl;
	}
		else if (playinp==2 && compinp==1){
		winner="computer";
		cout<<"\tThe Winner Is "<<winner<<endl;
		cond=true;
	}
		else if (playinp==2 && compinp==2){
		winner="Tie";
		cout<<"\tThe Winner Is "<<winner<<endl;
	}
		else if (playinp==2 && compinp==3){
		winner=playername;
		cout<<"\tThe Winner Is "<<winner<<endl;
		cond=true;
	}
		else if (playinp==3 && compinp==1){
		winner=playername;
		cout<<"\tThe Winner Is "<<winner<<endl;
		cond=true;
	}
		else if (playinp==3 && compinp==2){
		winner="computer";
		cout<<"\tThe Winner Is "<<winner<<endl;
		cond=true;
	}
		else if (playinp==3 && compinp==3){
		winner="Tie";
		cout<<"\tThe Winner Is "<<winner<<endl;
	}	
}
int main() {
	cout<<"Input Player Name : ";
	getline(cin,playername);
	while (cond==false){
	cout<<string(20,'=')<<endl;
	cout<<"PaperRockScissor Game"<<endl;
	cout<<string(20,'=')<<endl;
	cout<<"Rules"<<endl;
	cout<<"1.Scissor vs Rock = Rock win"<<endl;
	cout<<"2.Rock vs Paper = Paper win "<<endl;
	cout<<"3.Paper vs scissor= scissor win\n\n"<<endl;
	system("pause");
	system("cls");
	condition();
}
}
