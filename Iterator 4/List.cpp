#include "List.h"

ListIterator* List::createIterator(Iterators its, const int aStep, bool(*func)(int)) const
{
	if (its == Iterators::STEP)
		return new ListIteratorStep(this, aStep);
	if (its == Iterators::VALUE)
		return new ListIteratorValue(this, aStep);
	if (its == Iterators::PREDICATE)
		return new ListIteratorPredicate(this, func);
	return nullptr;
}

