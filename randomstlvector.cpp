#include "randomstlvector.h"

using namespace randomization;

template <typename T>
std::vector<T> randomVector(const int& minSize, const int& maxSize)
{
    std::vector<T> outV;
    int size = 0;
    if((maxSize == 0)||(maxSize<=minSize))
    {
        size = minSize;
    }
    else
    {
        size = rand()%(maxSize - minSize + 1) + minSize;
    }

    outV.reserve(size);
    T maxValue = (std::numeric_limits<T>::max());
    for(int i = 0; i< size; i++)
    {
        outV.push_back(static_cast<T>(rand()%maxValue));
    }

    return outV;
}
