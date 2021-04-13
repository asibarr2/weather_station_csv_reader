#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void read_csv()
{
   ifstream myCsv;
   myCsv.open("20180101.csv");

   while(myCsv.good()){
      string line;
      getline(myCsv, line, ',');
      cout << line << endl;
   }
}

void read_csv_stat()
{
   ifstream ip("20180101.csv");

   if(!ip.is_open()) std::cout << "ERROR: File Open" << '\n';

   string firstname;
   string lastname;
   string age;
   string weight;

   while(ip.good()){
      getline(ip, firstname, ',');
      getline(ip, lastname, ',');
      getline(ip, age, ',');
      getline(ip, weight, '\n');

      std::cout << "Name: " << firstname << '\n';
      std::cout << "Last name: " <<lastname<< '\n';
      std::cout << "Age: " <<age << '\n';
      std::cout << "Weight: "<<weight << '\n';
      std::cout << "----------" << '\n';
   }
   ip.close();
}


void read_txt()
{
   ifstream myTxt;
   myTxt.open("/home/rinzler/Desktop/04/ghcnd-stations.txt");

   while(myTxt.good()){
      string line;
      getline(myTxt, line, ' ');
      cout << line << endl;
   }

}


int main()
{
   read_csv_stat();
   return 0;
}
