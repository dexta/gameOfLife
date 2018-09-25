#include <emscripten/emscripten.h>

int myNeighbours[8][2] = {
  {-1,-1},{-1,0},{-1,+1},{0,-1},{0,+1},{+1,-1},{+1,0},{+1,+1}
};

int EMSCRIPTEN_KEEPALIVE square (int x) {
  return x * x;
}

int EMSCRIPTEN_KEEPALIVE nextGeneration(bool grid[])