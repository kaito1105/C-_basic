/**
    @file h26.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/

#ifndef H26_H_
#define H26_H_

/**
 * Copies all even numbers from a to b.
 *
 * @param a array of const int.
 * @param aSize size of array a.
 * @param[out] b array of int to be filled in with even numbers.
 * @param[int, out] bSize declared size of b on entry; returns number of elements copied.
 *
 * @pre bSize >= aSize
 * @post b filled with even numbers from a.
 *      bSize set to number of even values copied.
 *
 * @throw illegal_length exception if size of b < size of a
 *
 */
void copyEvens(const int a[], size_t aSize, int b[], size_t& bSize);

/**
 * cliqueCount: counts the number of adjacent groups of two or more.
 *
 * @param a an array of const int.
 * @param aSize size of array a.
 *
 * @return the number of cliques in the array.
 *
 */
int cliqueCount(const int a[], size_t aSize);

/**
 * Rearranges the array so that every 7 is followed by an 11.
 *
 * @param[in,out] a an array of int.
 * @param aSize size of array a.
 *
 */
void sevenEleven(int a[], size_t aSize);

#endif
