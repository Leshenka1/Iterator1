#include "List.h"

ListIterator* List::createIterator(Iterators its, const int aStep) const
{
	if (its == Iterators::STEP)
		return new ListIteratorStep(this, aStep);
	if (its == Iterators::VALUE)
		return new ListIteratorValue(this, aStep);
	return nullptr;
}