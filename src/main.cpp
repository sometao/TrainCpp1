#include <iostream>
#include "Box.h"


using namespace std;

namespace train {
namespace data {
extern Box getData();
}

extern int calcualate(string);

void startServer() {
  cout << "startServer." << endl;
  Box data = data::getData();
  cout << data.name << ": " << data.getValue() << endl;
}

}  // namespace train

int main() {
  cout << "Hello Main." << endl;
  train::startServer();
  return 0;
}
