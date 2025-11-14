#pragma once

class Subject;

class Observer {
public :
	virtual ~Observer() {}
	virtual void OnNotify(const Subject& subject) = 0;
};