/*
       # |##
      ###|##
     ####|##
    #####|##
   ##  ##|##
  ##---##|##
 ##    ##|#######
##     ##|#######
@Ahmed-Lotfi
-Every day can be a new beginning:)
*/
#include <iostream>
using namespace std;
/*OOP*/
struct date 
{
    string day, month, year;
    void readData(string s1,string s2,string s3)
    {
        day = s1;
        month = s2;
        year = s3;
    }
    void printYMD()
    {
        cout << "Date: Y/M/D"<<endl;
        cout << year << '/' << month << '/' << day << endl;
    }
    void printMY()
    {
        cout << "Date: M/Y" << endl;
        cout << month << '/' << year << endl;
    }
    void printDM()
    {
        cout << "Date: D/M"<<endl;
        cout << day << '/' << month << endl;
    }
};
/*****/
int main()
{
    date dateNow;
    dateNow.readData("10", "05", "2023");
    dateNow.printYMD();
    dateNow.printDM();
    dateNow.printMY();
}
