// Deserializer.cpp: Defines the exported functions for the DLL.
#include "pch.h";
#include "sqlite/sqlite3.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool deserialize(string SerializedDatabase) {
	sqlite3* db;
	unsigned char* pData;

	sqlite3_open("temp.db", &db);

	auto charText = SerializedDatabase.c_str();
	pData = reinterpret_cast<unsigned char*>(const_cast<char*>(charText));

	sqlite3_deserialize(db, "myDbDeserialized", pData, sizeof * pData, sizeof pData, 0);

	return true;
}