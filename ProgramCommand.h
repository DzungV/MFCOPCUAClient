#pragma once
#include <string>
using namespace std;

class ProgramCommand
{
public:
	
	void recordProgramCommand(string Command);
	void recordTaughtPoints(string Points);
	void clearProgramCommand();
	void clearTaughtPoints();
};

