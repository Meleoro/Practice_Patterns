#pragma once

class FileSystem {
public :
	~FileSystem() {};
	static FileSystem& Instance() {
		if (instance == nullptr) {
			instance = new FileSystem();
		}
		return *instance;
	}

	void CreateFile();

private :
	FileSystem() {}
	static FileSystem* instance;
};


// Autre implementation
class FileSystemMeyer {
public:
	static FileSystemMeyer& Instance() {
		static FileSystemMeyer instance;
		return instance;
	}

	void CreateFile();

private:
	FileSystemMeyer() {}
	~FileSystemMeyer() {}
};
