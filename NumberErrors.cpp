// NumberErrors.cpp 
// Schuyler Vercauteren
// Cosci 2

#include<iostream>
using namespace::std;

//#1.)
short shortSum(int x)
{
	short n = x;
	short sum = 0;
	for (short i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}
//#2.) 
//The sum for n=200 is 20100. The sum for n=300 is -20386. 
//The sum for n=250 is 31375. The sum for n=275 is -27586. 
//The sum for n = 262 is -31083. The sum for n=256 is -32640.
//The sum for n=253 is 32131. The sum for n=255 is 32640.
//The Overflow Limit is 255.

//#3.)
long longSum(int x)
{
	long n = x;
	long sum = 0;
	for (long i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}
//#3.) The sum for n=200 is 20100. The sum for n=255 is 32640.
// The sum for n=256 is 32640.The sum for n=1000 is 125250.
// The sum for n=10000 is 50005000. The sum for n=100000 is 32640.
// The Sum for n=100000 is  705082704. The Sum for n=10000000 is -2004260032.
//etc. until The Sum for n=1449220 is -2146958710. and The Sum for n=1449219 is 2146559366.
// The Overflow Limit is 1449219.


//#4.)
float longFact(int x)
{
	long n = x;
	long product = 0;
	if (n > 1)
	{
		product = n * longFact(n - 1);
	}
	else { return 1; }
	return product;
}
//#4.) screw this. I am using a while loop.
// The Overflow limit is 12.
/*cout << "the Product of longFact(13) is" << longFact(13) << endl;
int i = 1000;
while (longFact(i) < 0)
{
i--;
}
cout << "try: " << i << endl;
*/

//#5.)
float doubleFact(int x)
{
	double n = x;
	double product = 0;
	if (n > 1)
	{
		product = n * longFact(n - 1);
	}
	else { return 1; }
	return product;
}
//#5.) using the same while loop as #4.
// The Overflow limit is 13.

//#6.)
double strange(double x)
{
	double ratio = 1 / x;
	double sum = 1;
	for (int i = 0; i < x; i++)
	{
		double hold = sum;
		sum = ratio * hold;
	}
	return sum;
}
//#6.) Expected to return the value 1/(n^2). The Overflow will happen in the decimal place.
//Using floating values, at around 30, it fails computing the precision.

//Using doubles this happens around 148. (used while loop to check)

//since floating point vaules are less precise(x7), then doubles(x15), the computer runs out of available space to store precision faster using floats than when using doubles.

//#7.) the compiler thinks that using floating point values for precision, that (4.2 + 0.2) < (4.4) and so it runs through the while loop and prints "i=4.4". 
// this is because of a truncation error when computing floats.

//#8.) The compiler no longer sees the truncation error, it computes with more precision and does not enter the final loop.

int main()
{
	
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}


    return 0;
}

