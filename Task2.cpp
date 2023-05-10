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
struct Time 
{
    string hour, minute, second;
    void readData(string s1,string s2,string s3)
    {
        hour = s1;
        minute = s2;
        second = s3;
    }
    void printYMD()
    {
        cout << "Time: H:M:S"<<endl;
        cout << hour << ':' << minute << ':' << second << endl;
    }
};
/*****/
int main()
{
    Time timeNow ;
    timeNow.readData("12", "30", "15");
    timeNow.printYMD();
}
