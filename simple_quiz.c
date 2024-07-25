#include<stdio.h>
#include<conio.h>

#include<ctype.h>
#include<stdlib.h>







void help()
 {
 system("cls");
 printf("\n\n\n\tThis  quiz game is very easy to play. You'll be asked some general");
 printf("\n\n\tknowledge questions and the right answer is to be chosen among");
 printf("\n\n\tthe four options provided. ");
 printf("\n\n\t Your score will be calculated at the end. ");
 printf("\n\n\t Your score will be calculated and displayed");
 printf("\n\n\tat the end and displayed.");
 printf("\n\n\t So BEST OF LUCK.");
 }

int main()
     {
     int count,n,countr;
     int r,r1,i;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     puts("\n\t\t WELCOME TO quiz\n\n") ;
     puts("\n\t\t-------------------------------");
     puts("\n\t\t Enter 'S' to start game       ");
     puts("\n\t\t Enter 'H' for help            ");
     puts("\n\t\t Enter 'Q' to quit             ");
     printf("\n\t\t-------------------------------\n\n\t\t  ");
     choice=toupper(getch());
if (choice=='Q')
 exit(1);
     else if (choice=='H')
 {
 help();
 getch();
 goto mainhome;
 }
    else if(choice=='S'){
     system("cls");

     printf("\n\n\n\t\t\tEnter your name...");
     printf("\n\t\t\t(only your first name)\n\n\t\t\t");
     gets(playername);

     home:
     system("cls");
     printf("\n\n\n\t press any key to start ");
     if (toupper(getch())=='p')
     {goto game;}
game:     
     countr=0,count=0;
     for(i=1;i<=20;i++){
	 
	 system("cls");

	 r=i;

     switch(r)
  {
  case 1:
  printf("\n\nWhat is the maximum no. of asymptotes of the curve x^4+2x+6=0?");
  printf("\n\nA.4\tB.3\n\nC.none\tD.infinite\n\n");
  count++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.4");
		 getch(); break;}

  case 2:
  printf("\n\n\nHow many points are possible in a compound pendulum about which");
  printf("time period is same?");
  printf("\n\nA.4\tB.2\n\nC.none\tD.infinite\n\n");
  count++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
        {
		  printf("\n\nWrong!!! The correct answer is A.4");
         getch(); goto score;
  break;}

  case 3:
  printf("\n\n\nWho was the first US President?");
  printf("\n\nA.Richard Nikson\tB.Abraham Linkon\n\nC.John F. Kennedy\tD.George Washington\n\n");
  count++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.George Washington");
		 getch(); goto score;break;
		}


  case 4:
  printf("\n\n\nWho was awarded the 'Man of the Tournament' of ICC WORLD CUP 2007?");
  printf("\n\nA.Glen Magrath\tB.Mahela Jawardan\n\nC.Mathew Hayden\tD.Sachin Tendulkar\n\n");
  count++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Glen Magrath");
		 getch(); goto score;break;}


  case 5:
  printf("\n\n\nWhich country won the Fifa World Cup 1998?");
  printf("\n\nA.France\tB.Brazil\n\nC.Italy\tD.England\n\n");
  count++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.France");getch(); goto score;
		 break;
		 }

  case 6:
  printf("\n\n\nWhich syllabe is stressed in the word 'democracy'?");
  printf("\n\nA.1st\tB.2nd\n\nC.3rd\tD.4th\n\n");
  count++;
  if (toupper(getch())=='B' )
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.2nd");
		 getch(); goto score;
		 break;}


  case 7:
  printf("\n\n\nWhich country was the winner of Cricket World Cup 1987?");
  printf("\n\nA.West Indies\tB.India\n\nC.Australia\tD.England\n\n");
  count++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Australia");
		 getch(); goto score;
		 break;}


  case 8:
  printf("\n\n\nWhat is the height of Mount everest in feet?");
  printf("\n\nA.8648\tB.6648\n\nC.8884\tD.8848\n\n");
  count++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.8848");
		 getch(); goto score;
		 break;}


  case 9:
  printf("\n\n\nWhat is the capital of Denmark?");
  printf("\n\nA.Copenhagen\tB.Helsinki\n\nC.Rome\t\tD.Madrid\n\n");
  count++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Copenhagen");
		 getch(); goto score;
		 break;}


  case 10:
  printf("\n\n\nWhich syllabe is stressed in the word 'instanteneous'?");
  printf("\n\nA.1st\tB.2nd\n\nC.3rd\tD.4th\n\n");
  count++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.3rd");
		 getch(); goto score;
		 break;}


  case 11:
  printf("\n\n\nWho was the only player to score 6 successive sixes in an over?");
  printf("\n\nA.Adam Gilchrist\tB.M.S.Dhoni\n\nC.Herschel Gibbs\tD.Sanath Jayasurya\n\n");
  count++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Herschel Gibbs");
		 getch(); goto score;
		 break;}

  case 12:
  printf("\n\n\nWho was the only player to take 4 successive wickets?");
  printf("\n\nA.Malinga Bandara\tB.Lasith Malinga\n\nC.Bret Lee\tD.Murali Daran\n\n");
  
  count++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Lasith Malinga");
		 getch(); goto score;
		 break;}

  case 13:
  printf("\n\n\nWhich country is hosting the Fifa World Cup 2010?");
  printf("\n\nA.South Africa\tB.Italy\n\nC.Argentina\tD.Spain\n\n");
 
  count++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.South Africa");
		 getch(); goto score;
		 break;}

  case 14:
  printf("\n\n\nWho is the author of 'Pulpasa Cafe'?");
  printf("\n\nA.Narayan Wagle\tB.Lal Gopal Subedi\n\nC.B.P. Koirala\tD.Khagendra Sangraula\n\n");
  
  count++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Narayan Wagle");
		 getch(); goto score;
		 break;}

  case 15:
  printf("\n\n\nWhich country is Maria Sarapova from?");
  printf("\n\nA.Russia\tB.Switzerland\n\nC.Argentina\tD.Spain\n\n");

  count++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Russia");
		 getch(); goto score;
		 break;}

  case 16:
  printf("\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?");
  printf("\n\nA.Wayne Rooney\tB.Lucas Podolski\n\nC.Lionel Messi\tD.Christiano Ronaldo\n\n");
  
  count++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Lucas Podolski");
		 getch(); goto score;
		 break;}


  case 17:
  printf("\n\n\nWhat is the smallest district of Nepal?");
  printf("\n\nA.Lalitpur\tB.Karnali\n\nC.Bhaktapur\tD.Gulmi\n\n");
  
  count++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Bhaktapur");
		 getch(); goto score;
		 break;}

  case 18:
  printf("\n\n\nWhat is the headquarter of Western Development Region?");
  printf("\n\nA.Dhankuta\tB.Kathmandu\n\nC.Dhangadhi\tD.Pokhara\n\n");
  
  count++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.Pokhara");
		 getch(); goto score;
		 break;}

  case 19:
  printf("\n\n\nWhich place is called 'The Cherrapunji of Nepal'?");
  printf("\n\nA.Dharan\tB.Kathmandu\n\nC.Pokhara\tD.Butwal\n\n");

  count++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Pokhara");
		 getch(); 
		 break;}

  case 20:
  printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
  printf("\n\nA.Rome\tB.Vactican City\n\nC.Madrid\tD.Berlin\n\n");
  
  count++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Rome");
		 
		 break;}

  
}
  }
  

  score:
  	system("cls");

 score=(float)countr*10;
 if (score<0) score=0;
 printf("\n\n\nYour Score: %.2f",score);
 if (score==200) printf("\n\nEXCELLENT!!! KEEP IT UP");
 else if (score>=140 && score<200) printf("\n\nVERY GOOD!!");
 else if (score>=90 &&score<140) printf("\n\nGOOD! BUT YOU NEED TO KNOW MORE.");
 else if (score>=50 && score<90) printf("\n\nSATISFACTORY RESULT ");
 else printf("\n\nYOU ARE VERY POOR IN G.K.,WORK HARD");
 puts("\n\nNEXT PLAY?(Y/N)");
 if (toupper(getch())=='Y')
  goto home;
 else
  {
  
  goto mainhome;
  }
	  }else
 {
 printf("\n\n\t\t  Enter the right key\n\n\t\t  ");
 Sleep(700);
 goto mainhome;
 }return 0;
}
