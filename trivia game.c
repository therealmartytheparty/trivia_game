//Trivia_game
//prints a question and then gives 3-4 options for answers.
//options are outlined as a,b,c,d

//The code would first display the question
//then the code would display the 3-4 options for that question
//the can pick a answer by pressing a,b,c,d on the keyboard\
//the values
// a = 97
// b = 98
// c = 99
// d = 100


//code for the first question

//code for the first set of answers

#include <stdio.h>
#include <string.h>

void drawcharacter(int,int,char);
void drawpixel(int,int,short);
void delaytime(volatile int);
void writeText(int,int,char *);
void clearScreenWithCharacters();

int main()
{

  char buffer[20],buffer2[20];
  int n1 =100 , n2 = 300;
  int x1_start, y1_start;
  int x2_start, y2_start;
  int time, i;

  strcpy(buffer,"Player1 Score= "); //strcpy has "player1 Score = " string copied to buffer
  sprint(buffer2,"%d",n1);
  strcat(buffer,buffer2);

  char* fullstring = buffer;
  char* fullstring2 = "WINNER !!! ";

  /*write text to monitor beginnning at (col=x_start,row_start) fullstring*/

  x1_start = 28, x2_start = 28;
  y1_start = 05 , y2_start = 06;

}
