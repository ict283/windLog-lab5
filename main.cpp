// For review purposes only! Does not represent the actual solution!

#include <iostream>
#include “Date.h”  // your Date class from a previous lab
#include “Time.h”  // your Time class from this lab
#include “Vector.h” // your Template Vector class from this lab
#include "windLogType.h"

struct WindLogType
{
    Date d;
    Time t;
    float speed;
};


int main(void)
{
   Vector<windLogType> listOfData;

   string fileName= "Y";

   ifstream infile (fileName);

    if(infile.is_open())
    {

       while(Y)
      {
        //read in data...

        int windspeed;

        windLogType data;
        data.d.setDate(Y);
        data.t.setTime(Y);
        data.speed = windspeed;

        listOfData.push_back(data);
        //store the data

      }

    }
    else
    {
      cout<<"Error opening file";
    }


    return 0;
}
