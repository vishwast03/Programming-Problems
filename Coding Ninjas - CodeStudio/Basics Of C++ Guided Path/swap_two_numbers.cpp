#include <utility>

pair < int, int > swap(pair < int, int > swapValues) {
    int temp = swapValues.first;
    swapValues.first = swapValues.second;
    swapValues.second = temp;
    return swapValues;
}