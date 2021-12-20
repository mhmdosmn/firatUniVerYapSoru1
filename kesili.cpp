#include "kesili.h"
#include <iostream>
using namespace std;

kesili::kesili()
{
	n1 = n2 = m1 = m2 = 1;
}

void kesili::setValues(int n1, int m1, int n2, int m2)
{
	this->n1 = n1;
	this->m1 = m1;
	this->n2 = n2;
	this->m2 = m2;
}

void kesili::getValues()
{
	cout << n1 << "/" << m1 << " | " << n2 << "/" << m2 << endl;
}

double kesili::kesirlerEkle()
{	
	cout << (n1 * m2) + (n2 * m1) << " / " << m1 * m2 << endl;
	return (double)((n1*m2)+(n2*m1))/(m1*m2);
}
