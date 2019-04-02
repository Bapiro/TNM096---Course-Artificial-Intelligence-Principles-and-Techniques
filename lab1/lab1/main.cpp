//
//  main.cpp
//  lab1
//
//  Created by Lucas Palnén-Rung on 2019-03-28.
//  Copyright © 2019 Lucas Palnén-Rung. All rights reserved.
//

#include <iostream>
#include <stack>
#include <vector>
#include "Puzzle.h"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Puzzle puzzle;
    
   // puzzle.print(puzzle.openNodes.top());
    puzzle.print(puzzle.data);
    puzzle.SolvePuzzle();
    
    
    return 0;
}

