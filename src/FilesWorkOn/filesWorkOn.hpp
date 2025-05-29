#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <time.hpp>
class FilesWorkOn {
private:
	std::string fileName;
	std::string lastWorker;
	std::string author;
	std::string lastChange;
	std::fstream file;

protected:
	//setter
	bool setAuthor(const std::string& author);
	bool setFileName(const std::string& fileName);
	bool setLastChange(const std::string& lastChange);

public:
	FilesWorkOn(const std::string& fileName, const std::string& lastWorker, const std::string& author, const std::string& lastChange);
	
	//getter
	const std::string& getAuthor() const;
	const std::string& getFileName() const;
	const std::string& getLastChange() const;



	const void readFile();
	bool appendFile(const std::string& text);
	bool fromScratchFile(const std::string& text);
};