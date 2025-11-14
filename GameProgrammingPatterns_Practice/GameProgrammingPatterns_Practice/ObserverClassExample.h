#pragma once
#include "Observer.h"

class ObserverClassExample : public Observer {
	virtual void OnNotify(const Subject& subject) override;
};