#ifndef DATATYPE_H
#define DATATYPE_H

class DataType
{
   private:
     int month, day, year;

  public:
     void Initialize(int month, int day, int year);
     int GetMonth();
     int GetDay();
     int GetYear();
     string GetYearAsString();
     RelationType ComparedTo(aDate: Datetype);
     DataType Adjust(int DaysAways);
  
}
