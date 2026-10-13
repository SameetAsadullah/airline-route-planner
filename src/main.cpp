#include "graph.h"
#include "user_interface.h"
#include<iostream>
#include<string>
using namespace std;

int main() {
	Graph g("data/flights.txt", "data/hotel-charges.txt");
	UI ui;
	ui.displayMenu(g);
}
