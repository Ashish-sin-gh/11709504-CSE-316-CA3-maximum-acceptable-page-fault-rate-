#include<stdio.h>
#includestdlib.h>
##include<conio.h>

double max_page_fault_rate();

double pageFaultEmpty;
double pageFaultModified;
double accessTime;
double pageModTime;
double effectiveAccessTime;
double pageFaultRate;
double service_page_fault_empty_ns;
double service_page_fault_modified_ns;
double tpm;

dataIn()
{
printf("\nEnter service Page Fault | Empty | in millisecond");
	scanf("%lf",&pageFaultEmpty);
	printf("Enter Service Page Fault | Modified Page | in millisecond");
	scanf("%lf",&pageFaultModified);
	printf("Enter Memory Access Time | in nanosecond");
	scanf("%lf",&accessTime);
	printf("Enter % of time required to page to be replaced [0-100]");
	scanf("%lf",&pageModTime);
	printf("Enter Effective Access time | in nanosecond");
	scanf("%lf",&effectiveAccessTime);
	
	
}

