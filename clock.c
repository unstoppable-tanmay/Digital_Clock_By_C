#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#include "let.h"

void sleep(long milli)
{
	clock_t end, current = clock();
	for(end = current + milli; current < end;current = clock());
}
void maximizedWindow()
{
	HWND hwnd = GetConsoleWindow();
	ShowWindow(hwnd,SW_SHOWMAXIMIZED);
}
int main()
{
    for( ; ; )
    {
	    maximizedWindow();
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	    char font='|';
	    time_t t;
	    time(&t);
	    char time[100]; 
	    strcpy(time,"  ");
        strcat(time,ctime(&t));
        char * token = strtok(time," ");
        for(int i=0;i<4;i++)
        {
        	if(i==3)
        	{
//        		print(token,font);
        		char last[100]="$$$$";
        		strcat(last,token);
        		print(last,font);
	    	}
            token=strtok(NULL," ");
        }
        sleep(1000);
        system("cls");
	}
}