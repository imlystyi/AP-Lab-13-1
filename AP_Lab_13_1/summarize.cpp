// summarize.cpp - визначення функції Summarize()
#include <math.h>

#include "var.h"
#include "reccurent.h"
#include "summarize.h"

using namespace namespaceVar;
using namespace namespaceReccurent;
using namespace namespaceSummarize;

void namespaceSummarize::Summarize()
{
	a = x; sum = a; n = 1;

	do
	{
		Reccurent();

		sum += a;
		n++;
	} while (fabs(a) >= eps);
}