#include <stdio.h>
#include <math.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846
#define t 0.43
#define y 3.9668

float zad1(float q)
{
	float result;
	result = pow(log(fabs(q)), 3) + y;
	return result;
}
float zad2(float w)
{
	float result;
	result = w + (pow(t, 3) + w);
	return result;
}
float zad3(float e)
{
	float result;
	result = exp(2 * e) + sqrt(t);
	return result;
}
void main()
{
	setlocale(LC_CTYPE, "RUS");
	/*int a;//є1
	puts("¬ведите значение угла:");
	scanf("%d", &a);
	printf("”гол %d град равен %.6f", a, sin(a*M_PI/180));*/
	float x,a,b,c;//є2
	int k, n;
	printf("¬ведите х:  ");
	scanf("%f", &x);
	a = zad1(x);
	b = zad2(x);
	c = zad3(x);
	k = (int)a % 2 || (int)b % 2;
	n = (int)a / 3 && (int)b / 3 && (int)c / 3;
	printf("\nlg^3|x|+y = %.3f\n", a);//1
	printf("x(t^3+x)= %.3f\n", b);//2
	printf("e^2x + sqrt(t) = %.3f\n", c);//3
	printf("”словие 1 выполнено (1 - да, 0 - нет): %d\n", k);
	printf("”словие 2 выполнено (1 - да, 0 - нет): %d\n", n);


}