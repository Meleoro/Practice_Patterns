#pragma once

#include "Subject.h"

class SubjectClassExample {
public:
	~SubjectClassExample() {};
	SubjectClassExample();
	void DoSomething();

public :
	Subject* onSomethingHappened;
};