#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g,h,l;
int i,j,k,m;
int marks=0;
printf("Welcome to the Biology Quiz\n");
printf("\n Instructions:-\n-The Quiz Comprises of 10 Questions comprising Multiple Correct, Single Correct and True/False type Questions.\n-Each question carries 2 marks.\n-Every wrong answer awards -1 mark.\n\n");
printf("\nQ-1 Ordinary table salt is sodium chloride. What is baking soda?\n 1- Potassium chloride\t 2- Potassium carbonate\t 3- Potassium hydroxide\t 4- Sodium bicarbonate\n");
scanf("%d", &a);

	if(a==4)
	marks=marks+2;
	else
	marks=marks-1;

printf("\nQ-2 Ozone hole refers to\n 1- hole in ozone layer\t 2- decrease in the ozone layer in troposphere\t 3- decrease in thickness of ozone layer in stratosphere\t 4-increase in the thickness of ozone layer in troposphere\n");
scanf("%d", &b);

	if(b==3)
	marks=marks+2;
	else
	marks=marks-1;

printf("\nQ-3 Pollination is best defined as\n 1- transfer of pollen from anther to stigma\t 2- germination of pollen grains\t 3- growth of pollen tube in ovule\t 4- visiting flowers by insects\n");
scanf("%d", &c);

	if(c==1)
	marks=marks+2;
	else
	marks=marks-1;

printf("\nQ-4 Plants receive their nutrients mainly from \n 1- chlorophyll\t 2- atmosphere\t 3- light\t 4- soil\n");
scanf("%d", &d);

	if(d==4)
	marks=marks+2;
	else
	marks=marks-1;

printf("\nQ-5 Movement of cell against concentration gradient is called \n 1- osmosis\t 2- active transport\t 3- diffusion\t 4- passive transport\n");
scanf("%d", &e);

	if(e==2)
	marks=marks+2;
	else
	marks=marks-1;

printf("\nQ-6 An antibiotic is a preparation of weakened or killed virus or viral proteins.\n True/False? (Type 1 for true/0 for False)\n");
scanf("%d", &f);

	if(f==0)
	marks=marks+2;
	else
	marks=marks-1;

printf("\nQ-7 The nucleotides within a DNA strand may have different nitrogenous bases, but all have identical sugar molecules./n True/False? (Type 1 for T/2 for F)\n");
scanf("%d", &g);

	if(g==1)
	marks=marks+2;
	else
	marks=marks-1;

printf("\nQ-8 Bacteria can cause disease by releasing toxins into the body.\n True/False? (Type 1 for T/2 for F)\n");
scanf("%d", &h);

	if(h==1)
	marks=marks+2;
	else
	marks=marks-1;

printf("\nQ-9 Which of the following statements are true about Endoplasmic Reticulum?\n (1) Smooth Endoplasmic Reticulum makes lipids.\n (2) It is also called the control center of the cell.\n (3) It processes carbohydrates.\n (4) It modifies chemicals that are toxic to the cell.\n");
scanf("%d", &i);

	if(i==123)
	marks=marks+2;
	else
	marks=marks-1;

printf("\nQ-10 A genophore (nucleoid) consists of\n (1) Single Stranded\n (2) Double Stranded\n (3) DNA\n (4) RNA\n");
scanf("%d", &j);

	if(j==23)
	marks=marks+2;
	else
	marks=marks-1;

printf("\n QUIZ COMPLETED");
printf("Thanks for your time!\n Your Total Score is %d out of 20", marks);
}
