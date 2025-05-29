#include "filesWorkOn.hpp"

FilesWorkOn::FilesWorkOn(const std::string& fileName, const std::string& lastWorker, const std::string& author, const std::string& lastChange) :
	fileName(fileName), lastWorker(lastWorker), author(author), lastChange(lastChange) {
	this->file.open(fileName);
	this->file.close();
}

//getter
const std::string& FilesWorkOn::getAuthor() const {
	return author;
}
const std::string& FilesWorkOn::getFileName() const {
	return fileName;
}
const std::string& FilesWorkOn::getLastChange() const {
	return lastChange;
}

//setter
bool FilesWorkOn::setAuthor(const std::string& author) {
	this->author = author;
	return true;
}
bool FilesWorkOn::setFileName(const std::string& fileName) {
	this->fileName = fileName;
	return true;
}
bool FilesWorkOn::setLastChange(const std::string& lastChange) {
	this->lastChange = lastChange;
	return true;
}

const void FilesWorkOn::readFile() {
	std::string line;
	this->file.open(fileName);
	while (std::getline(this->file, line)) {
		std::cout<<line<<std::endl;
	}
	this->file.close();
}

bool FilesWorkOn::appendFile(const std::string& text) {
	this->file.open(fileName, std::ios_base::app);
	if (this->file << text) {
		setLastChange(myTime::nowStr());
		this->file.close();
		return true;
	}
	this->file.close();
	return false;
}

bool FilesWorkOn::fromScratchFile(const std::string& text) {
	this->file.open(fileName, std::ios_base::out | std::ios_base::trunc);
	file.clear();
	setLastChange(myTime::nowStr());
	if (this->file << text) {
		this->file.close();
		return true;
	}
	this->file.close();
	return false;
}