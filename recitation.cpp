#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

struct CarData
{
    string model;
    string make;
    string year;
};

int main(int argc, char* argv[])
{
    CarData carArray[10];
    ifstream inFile;
    string data;
    inFile.open(argv[1]);
    int count1 = 0;

    if (inFile.is_open())
    {
        cout << "Open successfully" << endl;
        while(getline(inFile, data))
        {
            //cout << data << endl;
            stringstream ss(data);
            ss >> carArray[count1].model;
            ss >> carArray[count1].make;
            ss >> carArray[count1].year;
            count1++;
        }
        for (int i = 0; i < 10; i++)
        {
            cout << "make:" << carArray[i].make << " model:" << carArray[i].model << " year:" << carArray[i].year << endl;
        }
        inFile.close();
    }
    else
    {
        cout << "File unsuccessfully opened" << endl;
    }
    return 0;
}
