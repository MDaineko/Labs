#include "stdafx.h
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main (void) {
	FILE *f1;
	f1 = fopen("F:\MC-12\Daineko_var-8\LAB9\NameA.txt","r");
	FILE *f2;
	f2 = fopen("F:\MC-12\Daineko_var-8\LAB9\NameB.txt","r");
	FILE *f3;
	f3 = fopen("F:\MC-12\Daineko_var-8\LAB9\NameC.txt","r");
	FILE *f = fopen("F:\MC-12\Daineko_var-8\LAB9\NameD.txt","w");
	long fileA_len = long filelength (int fileno (FILE *f1))/4;
	long fileB_len = long filelength (int fileno (FILE *f2))/4;
	long fileC_len = long filelength (int fileno (FILE *f3))/4;
	int a[fileA_len];
	int b[fileB_len];
	int c[fileC_len];
	int d[3];
	int i = 0;
  
	for (i, i++, i<fileA_len) {
	fscanf(f1,"&d", a[i]);
	}   
	i = 0;
	for (i, i++, i<fileB_len) {
	fscanf(f2,"&d", b[i]);
	}   
	i = 0;
	for (i, i++, i<fileC_len) {
	fscanf(f3,"&d", c[i]);
	}    
  
	a_max = a[0];
	for (i=1, i++, i<fileA_len) {
	if a[i]>a_max {
  		a_max = a[i];
		}	
	}
  
	b_max = b[i];
	for (i=1, i++, i<fileB_len) {
	if [i]>b_max {
		b_max = b[i];
	}
	  
	c_max = c[0];
	for (i=1, i++, i<fileC_len) {
	if c[i]>c_max {
		c_max = c[i];
		}
	d[3] = {a_max, b_max, c_max}
	fprintf(f,d)
}
