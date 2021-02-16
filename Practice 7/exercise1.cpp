#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <list>

using namespace std;



class Date{
  private:
    int day;
    int month;
    int year;
  public:
   //constructor
    Date(int d, int m, int y): day{d}, month{m}, year{y}{}
    
    string getDate(){
      string date_format= to_string(day) +'/'+to_string(month)+'/'+to_string(year);
      return date_format;
    }
    //tester method 
    void printDate(){
      cout<< day<<'/'<< month<< '/'<< year<<endl;
    };
};

class Blood{
  private:
      int systolic;
      int diastolic;
      Date date;
  public:
   //constructor
    Blood (int s, int di, Date da): systolic{s}, diastolic{di}, date{da}{}

    int getSys(){
      return systolic;
    }
    int getDias(){
      return diastolic;
    }
    string getDates(){
      return date.getDate();
    }
};


class Patient{
    private:
        string name;
        vector <Blood> blood_data;

    public:
        //constructor
        Patient(string n): name{n}{}

        void addRecord(Blood b){
          blood_data.push_back(b);
        };

        //tester method
        void printData(){
          cout<<name<<endl;
          for (int index=0; index < blood_data.size(); ++index){
            cout<<blood_data[index].getSys()<<endl;
            cout<<blood_data[index].getDias()<<endl;
            cout<<blood_data[index].getDates()<<endl;
          }
        }
        void printReport(){
          int max_systolic=0;
          int max_index=0;
          int count=0;

          //when threshold becomes 1, we are above 140
          int threshold=0;
          int sum_dias=0;
          float average_dias=0;

          for (int index=0; index<blood_data.size(); ++index){
            //highest abnormal systolic blood pressures
            if (blood_data[index].getSys() > max_systolic){
              max_systolic = blood_data[index].getSys();
              max_index=index;
            }

            //testing existance of measurements above 140
            if(blood_data[index].getSys()>140){
              threshold=1;
            }

            //Sum for average of diastolic blood pressures
            sum_dias += blood_data[index].getDias();  
          };

          //We print the list of highest systolic pressures with there associated diastolic pressure and date
          cout<<name<<  "'s highest abnormal systolic blood pressure is: "<<endl;
          for (int i=0; i<blood_data.size(); ++i){
            //Check if multiple maximal values
            if(blood_data[i].getSys() == max_systolic){
              cout<< blood_data[i].getSys() <<" on the: "<< blood_data[i].getDates()<<" with a diastolic blood pressure of : "<<blood_data[i].getDias()<<" ."<<endl;
            }
          }
          
          //We print whether some systolic measurements peak above 140
          if(threshold==1){
            cout<<"Some measurements were too high."<<endl;
          }
          else{
            cout<< "No measurement was too high."<<endl;
          }

          //Calculate average of diastolic blood pressures
          average_dias= float(sum_dias) / float(blood_data.size());
          cout<< "The average diastolic blood pressure of "<< name<< " is "<< average_dias<< endl;
        };
};

int main(){
    Patient mary("Mary");
    mary.addRecord(Blood(94,61, Date(2,5,2013)));
    mary.addRecord(Blood(97,65, Date(3,5,2013)));
    mary.addRecord(Blood(150,99, Date(4,5,2013)));
    mary.addRecord(Blood(123,88, Date(5,5,2013)));
    mary.addRecord(Blood(177,110, Date(6,5,2013)));
    mary.addRecord(Blood(145,89, Date(7,5,2013)));
    //mary.printData();

    Patient john("John");
    john.addRecord(Blood(88,57, Date(15,5,2013)));
    john.addRecord(Blood(95,61, Date(16,5,2013)));
    john.addRecord(Blood(114,80, Date(17,5,2013)));
    john.addRecord(Blood(151,96, Date(18,5,2013)));
    john.addRecord(Blood(176,104, Date(19,5,2013)));
    john.addRecord(Blood(176,110, Date(20,5,2013)));

    mary.printReport();
    john.printReport();


    return 0;
}