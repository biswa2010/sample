#include<stdio.h>
#include<stdlib.h>
//#include<ctype.h>
//#include<header.h>
//#include<stdlib.h>

void displayscore(){


}


void help(){


}


int main() {

char choice;
char playername[20];
puts("\n\t\t WELCOME TO IQ-TEST PROGRAM\n\n");
puts("\n\t\t -------------------------");
puts("\n\t\t ENTER 'S' TO START GAME");
puts("\n\t\t ENTER 'V' TO VIEW THE HIGH SCORE");
puts("\n\t\t ENTER 'H' FOR HELP");
puts("\n\t\t ENTER 'Q' QUIT");
printf("\n\t\t -------------------------\n\n\t\t");


choice =toupper(getchar());

if (choice == 'V'){


displayscore();
}

else if(choice =='Q')
exit(1);

else if (choice == 'H'){

help();
}

else if(choice == 'S'){

printf("\n\n\n\t\t\t Enter your name...");
printf("\n\t\t\t(only one word)\n\n\t\t\t");
//playername = gets();
gets(playername);

}
}
