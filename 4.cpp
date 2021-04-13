#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void read_csv_stat()
{
   ifstream ip("20180101.csv");

   if(!ip.is_open()) std::cout << "ERROR: File Open" << '\n';

   string id;
   string date;
   string status;
   string temperature;
   string junk;

   while(ip.good()){
      getline(ip, id, ',');
      getline(ip, date, ',');
      getline(ip, status, ',');
      getline(ip, temperature, ',');
      getline(ip, junk, '\n');

      std::cout << "ID: " << id << '\n';
      std::cout << "Date: " <<date<< '\n';
      std::cout << "Status: " <<status << '\n';
      std::cout << "Temperature: "<<temperature << '\n';
      std::cout << "----------" << '\n';
   }
   ip.close();
}


void read_txt()
{
   ifstream myTxt("ghcnd-stations.txt");
   string id;
   string latitude;
   string longitude;
   string elevation;
   string state;
   string name;
   string gsn_flag;
   string hcn_flag;
   string wmo_id;

   while(myTxt.good()){

      getline(myTxt, id, ' ');
      getline(myTxt, latitude, ' ');
      getline(myTxt, longitude, ' ');
      getline(myTxt, elevation, ' ');
      getline(myTxt, state, ' ');
      getline(myTxt, name, ' ');
      getline(myTxt, gsn_flag, ' ');
      getline(myTxt, hcn_flag, ' ');
      getline(myTxt, wmo_id, ' ');

      std::cout << "ID: " <<id<< '\n';
      std::cout << "Latitude: " <<latitude<< '\n';
      std::cout << "Longitude: " <<longitude<< '\n';
      std::cout << "State: " <<state<<'\n';
      std::cout << "Name: " <<name<<'\n';
      std::cout << "-----------------------------------------" <<'\n';

   }
   myTxt.close();

}


int main()
{
   read_csv_stat();
   return 0;
}
