#ifndef RANDOMSTLVECTOR_H
#define RANDOMSTLVECTOR_H

#include <vector>
#include <limits>

namespace randomizer {

template <typename T>
std::vector<T> randomVector(const int& minSize, const int& maxSize = 0);
  
}

#endif // RANDOMSTLVECTOR_H
