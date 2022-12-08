#include <ncurses\ncurses.h>
#include <windows.h>
using namespace std;
int main(){
	system("color 3c");
	initscr();
//	mvprintw(5,9, "nama saya detaaaaa");
//	refresh();
//	getch();

for(int i=0; i<=4; i++){
	mvprintw(i,i, "D");
	refresh();
	Sleep(500);
}
for(int j=5; j<=9; j++){
	mvprintw(j,j, "E");
	refresh();
	Sleep(500);
}
for(int k=10; k<=14; k++){
	mvprintw(k,k, "T");
	refresh();
	Sleep(500);
}
for(int l=15; l<=20; l++){
	mvprintw(l,l, "A");
	refresh();
	Sleep(500);
}
clear();
	endwin();
}
