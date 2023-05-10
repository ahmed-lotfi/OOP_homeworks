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
class Rectangle {
private:
    int width = 9;
    int length = 4;
public:
    void takeData(int w, int l)
    {
        width = w;
        length = l;
    }
    void area()
    {
        cout << "Area of the rectangle is: " << width * length << endl;
    }
};
/*****/
int main()
{
    Rectangle rec,rec2;
    rec.takeData(6, 5);
    rec.area();
    rec2.area();
}
