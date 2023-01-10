#include "pch.h"
#include "ProgramCommand.h"
#include <fstream>

// save the command program to a file


void ProgramCommand::recordProgramCommand(string Command)
{
	ofstream outFile;
	outFile.open("getcmd.ASM", ios::app); //append new values
	outFile << Command << "\n";
	outFile.close();
}
void ProgramCommand::recordTaughtPoints(string Points)
{
	ofstream outFile;
	outFile.open("points.ASM", ios::app); //append new values
	outFile << Points << "\n";
	outFile.close();
}
void ProgramCommand::clearProgramCommand()
{
	std::ofstream ofs;
	ofs.open("getcmd.ASM", std::ofstream::out | std::ofstream::trunc);
	ofs.close();
}

void ProgramCommand::clearTaughtPoints()
{
	std::ofstream ofs;
	ofs.open("points.ASM", std::ofstream::out | std::ofstream::trunc);
	ofs.close();
}
