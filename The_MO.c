#include <stdio.h>
#include <stdlib.h>

struct sxolh
{
	char mathima[30];
	float vathmos;
	float varuthta;
};


struct sxolh *Reading (char [], int *);
void Printing (struct sxolh [], int);
float mesoro (struct sxolh [], int);


int main()
{
	int N;
	float mo;
	struct sxolh *grad;
	
	grad = Reading("testGrades.txt", &N);
	Printing(grad, N);
	
	mo = mesoro(grad, N);
	
	printf("%\n\n Mo: %2.2f", mo);
	
	return 0;
}


struct sxolh *Reading (char FN[], int *Size)
{
	FILE *fp;
	struct sxolh *temp;
	int i, j, N;
	
	fp = fopen (FN, "r");
	if (fp == NULL)
	{
		printf ("Cannot open file");
		exit (1); 
	}
	fscanf (fp, "%d", &N);
	temp = (struct sxolh *) malloc (N * sizeof (struct sxolh));
	for (i = 0; i < N; i++)
	{
		fscanf (fp, "%s", temp[i].mathima);
		fscanf (fp, "%f", &temp[i].vathmos);
		fscanf (fp, "%f", &temp[i].varuthta);
	}
	
	fclose (fp); 
	*Size = N;
	
	return temp;
}


void Printing (struct sxolh grad[], int Size)
{
	int i;
	for (i = 0; i < Size; i++)
	{
		printf ("%30s %6.2f \n", grad[i].mathima, grad[i].vathmos);
	}
}


float mesoro (struct sxolh grad[], int Size)
{
	float arithmiths = 0.0;
	float paronomasths = 0.0;
	int i;
	
	for (i = 0; i < Size; i++)
	{
		arithmiths += grad[i].vathmos * grad[i].varuthta;
		paronomasths += grad[i].varuthta;
	}
	
	float r = arithmiths / paronomasths;
	
	return (r);	
}







