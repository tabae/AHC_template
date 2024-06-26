#include "common.hpp"
#include "state.hpp"
#include "annealer.hpp"
#include <iostream>
using namespace std;
using namespace common;

int main() {

    read();

    IterationControl<State> sera;
    State stat = sera.climb(1.8, State::initState());

    cerr << "my score = " << stat.score << endl;

}
