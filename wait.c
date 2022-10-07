/* The Waiting Game by Jeremy Bird (github.com/underwaterworldjungle) 2022 */

#include <stdio.h>
#include <unistd.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
	// TITLE SCREEN
	
	printf("\n                     |__   __| |\n                        | |  | |\n                        | |  | '_ \\ / _ \\\n                        | |  | | | |  __/\n __          __   _ _   |_|  |_| |_|\\___|\n \\ \\        / /  (_) | (_)              / ____|\n  \\ \\  /\\  / /_ _ _| |_ _ _ __   __ _  | |  __  __ _ _ __ ___   ___\n   \\ \\/  \\/ / _` | | __| | '_ \\ / _` | | | |_ |/ _` | '_ ` _ \\ / _ \\\n    \\  /\\  / (_| | | |_| | | | | (_| | | |__| | (_| | | | | | |  __/\n     \\/  \\/ \\__,_|_|\\__|_|_| |_|\\__, |  \\_____|\\__,_|_| |_| |_|\\___|\n                                 __/ |\n                                |___/\n");
	sleep(2);
	printf("\n\nTHE WAITING GAME  v0.01\n");
	sleep(1);
	printf("A thrilling game of waiting, patience and suspense. By Jeremy Bird\n\n");
	sleep(2);
	printf("PRESS [ENTER] TO START");
	while(getchar()!='\n');
	
	// INTRO
	
	system("cls");
	printf("\a\nHotellier:\tWelcome, traveller!\n");
	sleep(2);
	printf("\nPress any key to continue.");
	getch();
	
	printf("\rHotellier:          I see you have travelled far and grown weary.\n");
	sleep(2);
	printf("\nPress any key to continue.");
	getch();

	printf("\rHotellier:          There are many rooms in my hotel. Would you like a bed?\n");
	sleep(2);
	printf("\nPress any key to answer in the affirmative.");
	getch();
		
	printf("\rYou:          Give me the quietest room you've got.\n");
	sleep(2);
	printf("\nPress any key to continue.");
	getch();
	
	printf("\rHotellier:          Right this way, traveller.\n");
	sleep(2);
	printf("\nPress any key to follow the hotellier to your room.");
	getch();
	
	// THE ROOM
	
	system("cls");	
	printf("\a\nHotellier:          Here it is, traveller; your room. Is everything to your satisfaction?\n");
	sleep(2);
	printf("\nPress any key to inspect your hotel room.");
	getch();
	
	printf("\rAn inviting bed is firmly against the back wall. The room has no windows.\nA bathroom houses a neatly-presented flushable toilet and a sink with hot and cold water taps.\nThe atmosphere is quiet.\n");
	sleep(5);
	printf("\nPress any key to find the room satisfactory.");
	getch();
	
	printf("\rYou:          This will do. I'm knackered.  \n");     
	sleep(2);
	printf("\nPress any key to go to bed.");
	getch();
		
	printf("\rHotellier:          Your room key, traveller. Good evening, traveller.\n");
	sleep(2);
	
	// THE WAIT
	
	printf("\nHow long will you sleep? Enter a duration in hours, minutes and seconds.\n");
	
	unsigned int hours;
	unsigned int mins;
	unsigned int secs;
	
	printf("\nHours (0-99):\t");
	scanf("%i",&hours);
	if(hours>99){hours=99;}
	printf("\nMinutes (0-59):\t");
	scanf("%i",&mins);
	if(mins>59){mins=59;}
	printf("\nSeconds (0-59):\t");
	scanf("%i",&secs);
	if(secs>59){secs=59;}
	
	system("cls");
	printf("\nHours:'%i' \tMinutes:'%i' \tSeconds:'%i' ",hours,mins,secs);
	
	printf("\n\nSleeping...\n\n");
	
	do
	{
		printf("\rHours:'%i' \tMinutes:'%i' \tSeconds:'%i' \t sleep remaining.",hours,mins,secs);
		sleep(1);
		
		if((secs==0 && mins!=0))
		{mins=mins-1;secs=59;}
		//else if(!(secs=0 && mins!=0))
		//{secs=secs-1;}
		else if(!(secs==0))
		{secs=secs-1;}
		
		if((mins==0 && hours!=0))
		{hours=hours-1;mins=59;}
	}
	while(!(secs==0 && mins==0 && hours==0));
	
	system("cls");
	printf("\a\nYou awaken.");
	sleep(2);
	printf("\n\nPress any key to quit.");
	getch();
	
	return 0;
}