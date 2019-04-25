#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
//variable declaration
double pageFaultEmpty, pageFaultModified,accessTime, pageModTime, effectiveAccessTime, pageFaultRate, PFE, PFM, tpm;
//function to calculate page fault
double page_fault_rate(double PageFaultEmpty, double PageFaultMod, double MA , double timesPages,double EA)
{ 
 	double a;
    	double b;
	double n;
    	double d;
	double PF;
	a = (1- timesPages) * PageFaultEmpty;
	b = timesPages * PageFaultMod;
	n =EA - MA;
    d = (a+b);
	PF =n/d;
	return PF;

}
//function to take user input
void userInput()
{
printf("\nEnter Page Fault | Empty | in millisecond\n");
	
	scanf("%lf",&pageFaultEmpty);
	printf("Enter Page Fault | Modified Page | in millisecond\n");
	
scanf("%lf",&pageFaultModified);
	printf("Enter Memory Access Time | in nanosecond\n");
scanf("%lf",&accessTime);

	printf("Enter percentage of page to be replaced [0-100]\n");
	scanf("%lf",&pageModTime);

	printf("Enter Effective Access time | in nanosecond\n");
	scanf("%lf",&effectiveAccessTime);
	
	PFE = (pageFaultEmpty*1000000);
	PFM = (pageFaultModified*1000000);
	tpm = (pageModTime/100);
   
	printf("\nPage Fault rate calculated For:\n");
	printf("Page Fault (Page Not Modified): %lf \n",PFE);
	printf("Page Fault (Modified Page): %lf \n",PFM);
	printf("Memory Access Time(ns): %lf\n",accessTime);
	printf("Effective Access Time: %lf\n",effectiveAccessTime);
    	pageFaultRate =  page_fault_rate(PFE,PFM,accessTime,tpm,effectiveAccessTime);
	printf("\nMaximum Acceptable Page Fault rate: %.3e",pageFaultRate);
}

//main function
int main(){
	
	int z;
	
	
	A:
	printf("press desired key:\n");
	printf("   1 for Finding the maximum PageFault Rate\n");
	printf("   2  for closing the program");
	scanf("%d",&z);
	switch(z){
		case 1:userInput();
		printf("\n\n\n");
		goto A;
		break;
		case 2:exit(1);
	}
return 0;	
}




