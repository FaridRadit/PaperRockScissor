#include <iostream>
#include <cstdlib>
using namespace std;
string player11,player22;
int point1,point2,random_integer;
int number2,number1;
void player1(){
	cout<<"Input your Number "+player11+" : ";
	cin>>number1;
}
void player2(){
	cout<<"Input your Number "+player22+" : ";
	cin>>number2;
	
}
	

void filldataplayer(){
	cout<<"Fill Your Player Name : " <<endl;
	cout<<"Player one : ";
	getline(cin,player11);
	cout<<"Player two : ";
	getline(cin,player22);
}
void condition () {
	if (number1==random_integer) {
		cout<<player11<<" Correct"<<endl;
		point1+=1;
	}
	else if (number2==random_integer) {
	cout<<player22<<" Correct" <<endl;
	point2+=1;
}
	else {
		cout<<"No One guess right no one Get A point"<<endl;
	}
}

void game (){

	cout<<"\t\t\t\t\t|"<<player11<<" points : "<<point1<<"|"<<endl;
	cout<<"\t\t\t\t\t|"<<player22<<" points : "<<point2<<"|"<<endl;
	cout<<string(20,'=')<<endl;
	cout<<"Rules"<<endl;
	cout<<string(20,'=')<<endl;
	cout<<"The game is to guess random number from 1-20"<<endl;
	cout<<"The player guessed right get 1 point"<<endl;
	cout<<"The First player get 5 points win"<<endl;
	random_integer=rand()%10+1;
	cout<<player11<<" Guess : "<<endl;
	player1();
	cout<<player22<<" Guess : "<<endl;
	player2();
	condition();
	
}


int main() {
	filldataplayer();
	while (point1!=5 || point2!=5){
	game();
	if (point1==5){
		cout<<player11<<" Wins"<<endl;	
		break;
	}
	else if (point2==5){
		cout<<player22<<" Wins"<<endl;
		break;

}
}
}
