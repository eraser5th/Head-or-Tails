#include <iostream>
#include <string>

int main() {
  srand(time(NULL));

  std::cout << "Tossing a coin...\n";

  std::string results[3] = {
    rand() % 2 ? "Heads" : "Tails",
    rand() % 2 ? "Heads" : "Tails",
    rand() % 2 ? "Heads" : "Tails",
  };

  std::cout << "Round 1: " << results[0] << "\n";
  std::cout << "Round 2: " << results[1] << "\n";
  std::cout << "Round 3: " << results[2] << "\n";

  int headsCount = 0;
  int tailsCount = 0;

  for (int i = 0; i < 3; i++) {
    if (results[i] == "Heads") {
      headsCount++;
    } else {
      tailsCount++;
    }
  }
  printf("Heads: %d, Tails: %d\n", headsCount, tailsCount);

  return 0;
}
