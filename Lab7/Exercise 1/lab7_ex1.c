#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int search (int *pA, int n)
{
	int  m, ZERO, x, y;
	m = n;
	for(x=0; x<n; x++)
	{
	ZERO = 1;
	for(y=0; y<m; y++)
	{
		if (*(pA+x*m+y)>=0)
		ZERO = 0;
	}
	if (ZERO==1)
	return x+1;
	}
	return 0;
}
	void main() 
	{
	setlocale(LC_ALL, "Russian");
	int N, M, i, j, zero, *pA, z; 
	printf("������� ����������� �������: ");
	scanf("%d", &N);
	M=N;
	pA=(int*)malloc(M*sizeof(int));
	if(pA==NULL)
	{
	printf("������������ ������!\n");
	getch();
	return;
	}

	printf("������� �������� �������: \n");
	for(i=0; i<N; i++)
	for(j=0; j<M; j++)
	{
	printf("A[%d][%d]=",i,j);
	scanf("%d", pA+i*M+j);
	}
	printf("�������� �������: \n");
	for(i=0; i<N; i++)
	{
	for(j=0; j<M; j++)
	printf("%4d", *(pA+i*M+j));
	printf("\n");
	}
	z = search(pA, N);
	if (z==0) 
	printf("��� ������� ������!");
	else printf("� ������ � ������� %d ��� �������� ������������! \n", z);
	getch();
}
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
