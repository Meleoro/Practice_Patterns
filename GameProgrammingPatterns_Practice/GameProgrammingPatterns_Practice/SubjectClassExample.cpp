#include "SubjectClassExample.h"
#include "Subject.h"
#include <iostream>


SubjectClassExample::SubjectClassExample()
{
	onSomethingHappened = new Subject();
}

void SubjectClassExample::DoSomething()
{
	std::cout << "Subject Did Something" << std::endl;

	onSomethingHappened->Notify();
}
