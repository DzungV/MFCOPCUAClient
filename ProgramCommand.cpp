#include "pch.h"
#include "ProgramCommand.h"
#include <fstream>

// save the command program to a file


void ProgramCommand::recordProgramCommand(string Command)
{
	ofstream outFile;
	outFile.open("getcmd.txt", ios::app); //append new values
	outFile << Command << "\n";
	outFile.close();
}
void ProgramCommand::clearProgramCommand()
{
	std::ofstream ofs;
	ofs.open("getcmd.txt", std::ofstream::out | std::ofstream::trunc);
	ofs.close();
}