#include "ObserverClassExample.h"
#include <iostream>


void ObserverClassExample::OnNotify(const Subject& subject)
{
	std::cout << "Observer Notified" << std::endl;
}
