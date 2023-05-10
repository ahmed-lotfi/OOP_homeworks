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
/*
My friend designed this struct let's see
what we can do to better orgnaize it.
struct DateTime{
int day;
int month;
int year;
int hour;
int minute;
int second;
DateTime(int day,int month,int year,
        int hour,int minute,int second)
        {
            
        }
*/
// let's do it!
struct DateTime 
{
    int day,month,year,hour,minute,second;
    void readDate(int Year, int Month, int Day)
    {
        year = Year;
        month = Month;
        day = Day;
    }
    void readTime(int Hour, int Minute, int Second)
    {
        hour = Hour;
        minute = Minute;
        second = Second;
    }
    void printDate()
    {
        cout << "Date: Y/M/D"<<endl;
        cout << year << '/' << month << '/' << day << endl;
    }
    void printTime()
    {
        cout << "Time: H:M:S" << endl;
        cout << hour << ':' << minute << ':' << second << endl;
    }
};
/*****/
int main()
{
    DateTime DT;
    DT.readDate(2023, 05, 10);
    DT.readTime(12, 30, 15);
    DT.printDate();
    DT.printTime();
}
