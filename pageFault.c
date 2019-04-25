#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
double page_fault_rate();
void userInput(void);

double pageFaultEmpty;
double pageFaultModified;
double accessTime;
double pageModTime;
double effectiveAccessTime;
double pageFaultRate;
double PFE;
double PFM;
double tpm;
	

void main(){
	int z;
	
	do{
	printf("press desired key:\n");
	printf("   1 for Finding the maximum PageFault Rate\n");
	printf("   2  for closing the program");
	scanf("%d",&z);
	switch(z){
		case 1:userInput();
		break;
		case 2:exit(0);
	}
	printf("\n\n\n\n");

}
while(z<3);
}

void userInput(){
	printf("\nEnter service Page Fault | Empty | in millisecond");
	scanf("%lf",&pageFaultEmpty);
	printf("Enter Service Page Fault | Modified Page | in millisecond");	
scanf("%lf",&pageFaultModified);
	printf("Enter Memory Access Time | in nanosecond");
scanf("%lf",&accessTime);
	printf("Enter percentage of time required to page to be replaced [0-100]");
	scanf("%lf",&pageModTime);
	printf("Enter Effective Access time | in nanosecond");
	scanf("%lf",&effectiveAccessTime);
	PFE = (pageFaultEmpty*1000000);
	PFM = (pageFaultModified*1000000);
	tpm = (pageModTime/100);
	printf("\nPage Fault rate calculated For:\n");
	printf("Page Fault for Empty page (in nanoseconds): %lf \n",PFE);
	printf("Page Fault for Modified Page (in nanoseconds): %lf \n",PFM);
	printf("Memory Access Time(in nanoseconds): %lf\n",accessTime);
	printf("Effective Access Time %lf\n",effectiveAccessTime);
        pageFaultRate =  page_fault_rate(PFE,PFM,accessTime,tpm,effectiveAccessTime);
	printf("\nMaximum Acceptable Page Fault rate = %.2e[exponential notation]",pageFaultRate);
}

double page_fault_rate(double servicePageFaultEmpty, double servicePageFaultMod, double MA , double timesPages,double EA)
{
	double a;
                  double b;
	double n;
                  double d;
	double PF;
	 a = (1- timesPages)*servicePageFaultEmpty;
	 b = timesPages*servicePageFaultMod;
	n =EA -MA;
     d = (a+b);

	PF =n/d;
	return PF;
}


