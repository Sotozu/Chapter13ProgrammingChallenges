#include "Coin.h"
#include <time.h>
#include <cstdlib>
#include <string>

Coin::Coin() {
 flip();
}

void Coin::Toss() {
	flip();
}

std::string Coin::returnSideUp() const {
	return side_up;
}