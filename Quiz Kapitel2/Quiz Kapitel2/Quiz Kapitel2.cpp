#include "io.h"

#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>


int main() {
	
	plog::init(plog::debug, "Logfile.txt");
	
	PLOGD << "main() called";

	int x{ readNumber() };
	int y{ readNumber() };
	writeAnswer(x, y);


}