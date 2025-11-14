#pragma once

class Observer;

class Subject {
public :
	virtual ~Subject() {}
	void AddObserver(Observer* observer);
	void RemoveObserver(Observer* observer);
	void Notify();

private : 
	Observer* observers[10];
	int observersCount;
};