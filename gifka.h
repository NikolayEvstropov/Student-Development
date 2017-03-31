#include<iostream>
#include<iostream>
#include<conio.h>
#include<ctime>
int k,detal,sozd[100000],s,p;
using namespace std;
int S=0,P,j=-1,kol,n,i,*X/*динамически задаем одномерный масив для исходного ряда чисел*/,*x/*динамически задаем одномерный масив для  ряда чисел подходящих под условие Xi>P*/;
int podschet(int*X,int n,int P)//подсчет элементов результирующего масива
{
	int kol=0;
for(int i=0;i<n;i++)
	{
		if(X[i]>P)//проверяем условие Xi>P
			kol++;//подсчитываем их количество
		
	}
	return kol;//вывод программой kol 
}
int podschet(int*array)//подсчет элементов результирующего масива
{
	int kol=0;

	return kol;//вывод программой kol 
}
int* formirovka(int *X,int n)//формировка результирующего масива
{
		X=new int [n];//задаем количество в масиве
	for(i=0;i<n;i++)
	{
			sozd[i]=X[i]=rand()%20;//заполняем масив рандомными числами
	}
		return X;//вывод результата функцией
}
int* formirovka(int P,int *X,int n)//формировка результирующего масива
{
		kol=podschet(X,n,P);//подсчет элементов масива х
	x=new int[kol];//выделение памяти под  динамический масив
		for(i=0;i<n;i++)
		{
			if(X[i]>P)
		{
			j++;
			x[j]=X[i];//записываем в масив элемтов подходящих под условие Xi>P
		}
}
		return x;//вывод результата функцией
}
void vihodMas(int *array,int Size)//функция вывода масива чисел 
{
	int i;
	for(i=0;i<Size;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<"\n";
	getch();
}
void vihodMas(char *array,int Size)//функция вывода масива чисел 
{
	for(i=0;i<Size;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<"\n";
	getch();
}
void vihodMas(int number)//функция вывода масива чисел 
{
	 cout<<"\n";
	cout<<number;
	getch();
}
void vihodMas(int *array)//функция вывода масива чисел 
{
	 cout<<"\n";
	cout<<array;
	getch();
}
void vihodMas(char character)//функция вывода масива чисел 
{
	 cout<<"\n";
	cout<<character;
	getch();
}
int summa(int *array,int Size)//фунцция сумирования ряда чисел
{
	int i;
	for(i=0;i<Size;i++)
	{
		S=S+array[i];
	}
	return S;//вывод результата 
}
int summa(int *array,int Size,int *array1)//фунцция сумирования ряда чисел
{
	int i;
	for(i=0;i<Size;i++)
	{
		S=array1[i]+array[i];
	}
	return S;//вывод результата 
}
int summa(char *array,int Size,char *array1)//фунцция сумирования ряда чисел
{
	int i;
	for(i=0;i<Size;i++)
	{
		S=array1[i]+array[i];
	}
	return S;//вывод результата 
}
int* sozdanie(int Size)
{
    int i;
	if(s==0)
	{
		s++;
	X=new int [Size];//задаем количество в масиве
	for(i=0;i<Size;i++)
	{
			sozd[i]=X[i]=rand()%20;//заполняем масив рандомными числами
	}
	}
	else
		return sozd;
	return X;
}
int reliz()
{
if(k==0)
{
n=rand()%40;//рандомна зааем количество элементов
if(n<20)n=25;//недаем rand() задать n<20:))
detal=n;
k++;
}
else
	return detal;
return n;
}
int reliz(int peremena)
{
	if(peremena>0)
		k=0;
if(k==0)
{
n=rand()%40;//рандомна зааем количество элементов
if(n<20)n=25;//недаем rand() задать n<20:))
detal=n;
k++;
}
else
	return detal;
return n;
}
