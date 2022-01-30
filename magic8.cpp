#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
  
  // Seeding random numbers
  srand(time(NULL));
  int answer = rand()%10;

  // Switch statement for 8-BALL answers
  switch(answer){
    case 0:
      cout << "It is certain.\n";
      break;
    case 1:
      cout << "You may rely on it.\n";
      break;
    case 2:
      cout << "Yes.\n";
      break;
    case 3:
      cout << "Outlook good.\n";
      break;
    case 4:
      cout << "My reply is no.\n";
      break;
    case 5:
      cout << "Outlook not so good.\n";
      break;
    case 6:
      cout << "Ask again later.\n";
      break;
    case 7:
      cout << "Reply hazy, try again.\n";
      break;
    case 8:
      cout << "As I see it, yes.\n";
      break;
    default:
      cout << "Very doubtful.\n";
      break;
  }
}