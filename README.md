# Airline Reservation System

A console-based C++ airline search and reservation project that models flights as a graph and uses shortest-path techniques to find practical routes by cost or travel time.

[![C++ checks](https://github.com/SameetAsadullah/Airline-Reservation-System/actions/workflows/quality.yml/badge.svg)](https://github.com/SameetAsadullah/Airline-Reservation-System/actions/workflows/quality.yml)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

## Highlights

- Direct and connected-flight searches
- Dijkstra-style route optimization by ticket cost or travel time
- Filters for departure date and airline
- Hotel charges for layover destinations
- File-backed flight and hotel data
- Custom vector, linked-list, and stack implementations

## Project structure

| Path | Purpose |
|---|---|
| `src/Main.cpp` | Application entry point |
| `src/Graph.h` | Flight graph, traversal, and optimized-route logic |
| `src/Flight.h` | Flight and schedule domain model |
| `src/List.h`, `src/Vector.h`, `src/Stack.h` | Custom data structures |
| `src/UserInterface.h` | Interactive console workflow |
| `src/Flights.txt` | Flight schedule input |
| `src/HotelCharges_perday.txt` | Per-city hotel rates |

## Build and run

### Portable command-line build

```bash
cd src
g++ -std=c++17 -O2 Main.cpp -o airline-reservation
./airline-reservation
```

Run the executable from `src/` so the bundled data files can be found.

### Visual Studio

Open `src/Project.sln`, select a C++17-compatible toolset, and run the `Project` target.

## Input data

Each line in `Flights.txt` contains the departure city, destination city, departure date, departure and arrival times, ticket price, and airline. `HotelCharges_perday.txt` maps layover cities to daily hotel costs. Both files can be edited to explore other networks.

## Screenshots

| Search menu | Route result |
|---|---|
| ![Search menu](extras/working-ss-1.png) | ![Route result](extras/working-ss-2.png) |

## Project status

This is a preserved university data-structures project. The implementation remains close to the original work; repository maintenance focuses on portability, documentation, and removal of generated IDE artifacts.

## License

Released under the [MIT License](LICENSE).
