#include <iostream>
#include <string>
#include <vector>
#include "profile.hpp"

int main() {

  Profile sam ("Sam Drakkila", 30, "New York", "USA", "Bisexual", {"TTRPGS", "Reading"}, "he/him");

  sam.add_hobby("Rock climbing");

  std::cout << sam.view_profile();

}