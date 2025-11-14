#include "Subject.h"
#include "Observer.h"


void Subject::AddObserver(Observer* observer)
{
	if (observersCount == 10) return;

	observers[observersCount] = observer;
	observersCount++;
}

void Subject::RemoveObserver(Observer* observer)
{
	for (int i = observersCount - 1; i >= 0; i--) {
		if (observers[i] != observer) continue;

		observers[i] = nullptr;

		// We move all the elemnents placed after the removed one
		for (int j = i; j < observersCount - 1; j++) {
			observers[j] = observers[j + 1];
		}

		observersCount--;
		return;
	}
}

void Subject::Notify()
{
	for (int i = 0; i < observersCount; i++) {
		observers[i]->OnNotify(*this);
	}
}
