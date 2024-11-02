/**
    @file h21.h
    @author Stephen Gilbert
    CS 150 Declarations
*/
#ifndef H21_H_
#define H21_H_

#include <vector>
/**
    Merges two sorted vectors by interleaving their elements.
    The resulting vector is also in sorted order.
    If different sizes, elements from the longer vector
    appear at the end.

    @param a the first vector.
    @param b the second vector.
    @return the merged vector.
*/
std::vector<int> merge(const std::vector<int>& a,
                       const std::vector<int>& b);

#endif
