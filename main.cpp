// For review purposes only! Does not represent the actual solution!

#include <iostream>
#include "Time.h"
#include "Date.h"
#include "Vector.h"

stuct WindLogType {
        Date d;
        Time t;
        Float speed;
};

int main(void) {

  windLogType data;
  Vector<windLogType> listOfData;

  string fileName= "Y";
  ifstream infile (fileName);

  if(infile.is_open()) {

          while(Y) {

                  //Read raw data from file
                  getline(Y);
                  ...
                  ...

                  //Process raw data
                  ...
                  ...

                  //Update values
                  data.d.setDate(Y);
                  data.t.setTime(Y);
                  data.speed = Y;
                  ...
                  ...

                  //Push data obj into vector
                  listOfData.push_back(data);
                  ...
                  ...
          }

  }
  else {
          cout<<"Error opening file";
  }

    return 0;
}
