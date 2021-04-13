#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

std::vector<std::string> readRecordFromFile(std::string file_name, std::string search_term);

int main(){
	std::vector<std::string> data = readRecordFromFile("ghcnd-stations.txt", "ACW00011604");
	return 0;
}


std::vector<std::string> readRecordFromFile(std::string file_name, std::string search_term){

	std::vector<std::string> record;

	std::ifstream file;
	file.open(file_name);

	bool found_record = false;

	std::string field_one;
	std::string field_two;
	std::string field_three;

	while(getline(file, field_one, ',') && !found_record)
	{
		getline(file, field_two, ',');
		getline(file, field_three, '\n');
		if(field_one == search_term)
		{
			found_record = true;
			record.push_back(field_one);
			record.push_back(field_two);
			record.push_back(field_three);
		}
	}

	std::cout << record[0] << " " << record[1] << record[2];

	return record;
}
