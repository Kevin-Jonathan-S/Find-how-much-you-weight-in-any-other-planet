#include <iostream>

int main() {
  using namespace std;
  double weight;
  int num;
  double result;

  cout << "Enter your weight: ";
  cin >> weight;

  cout << "Enter any number from 1-7 where \n" << "1- Mercury\n" << "2- Venus\n"<< "3- Mars\n"<< "4- Jupiter\n"<< "5- Saturn\n"<< "6- Uranus\n"<< "7- Neptune\n"<<"Enter here: ";
  cin >> num;

  switch (num){
    case 1:
      result = weight*0.38;
      cout << "Weight on Mercury: " << result << "\n";
      break;
    case 2:
      result = weight*0.91;
      cout << "Weight on Venus: " << result << "\n";
      break;
    case 3:
      result = weight*0.38;
      cout << "Weight on Mars: " << result << "\n";
      break;
    case 4:
      result = weight*2.34;
      cout << "Weight on Jupiter: " << result << "\n";
      break;
    case 5:
      result = weight*1.06;
      cout << "Weight on Saturn: " << result << "\n";
      break;
    case 6:
      result = weight*0.92;
      cout << "Weight on Uranus: " << result << "\n";
      break;
    case 7:
      result = weight*1.19;
      cout << "Weight on Neptune: " << result << "\n";
      break;
    default:
      cout << "Weight on Earth: " << weight << "\n";
      break;
  }
}
