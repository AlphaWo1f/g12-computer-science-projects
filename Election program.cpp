#include <iostream>


using namespace std;

int main() {

  string name[3];
  long double vote[3];
  double total, percent;
  
  
  cout << "Enter the candiadate names";

  cin  >> name[0];

   cout << "Enter the second candiadate name";

  cin  >> name[1];

   cout << "Enter the third candiadate name";

  cin  >> name[2];



  
    cout << "Enter " << name[0] << " votes";

  cin  >> vote[0];

    cout << "Enter " << name[1] << " votes";

  cin  >> vote[1];

    cout << "Enter " << name[2] << " votes";

  cin  >> vote[2];


  cout << name[0] << " " << vote[0] << " "<< vote[0] / (vote[0] + vote[1] + vote[2])*100 << "%\n" ;
    cout << name[1] << " " << vote[1] << " "<< vote[1] / (vote[0] + vote[1] + vote[2])*100 << "%\n" ;
    cout << name[2] << " " << vote[2] << " "<< vote[2] / (vote[0] + vote[1] + vote[2])*100 << "%\n" ;
  cout << "TOTAL: " << vote[0] + vote[1] + vote[2];
}