/**
    @file h25.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H25_H_
#define H25_H_

/**
 *  Calculates an alternating sum of the elements in a.
 *  @param a an array of const int.
 *  @param size the number of elements in the array.
 *  @pre #size is > 0
 *  @return the alternating sum of {a, b, c, d} -> a - b + c - d
 *  Don't worry about overflow of the result.
 */
int alternatingSum(const int a[], size_t size);

struct MinMax
{
    const double * min = nullptr;
    const double * max = nullptr;
};
/**
 * Returns pointers to the extreme values in the array.
 * @param a pointer the first element in an array of doubles
 * @param size the number of elements in the array.
 * @return a MinMax structure; nullptrs if size is 0.
 */
MinMax minMax(const double *ptr, size_t size);

/**
 * sameSet: checks if a and b have the same set of ints.
 *  - ignores multiplicity and order.
 *
 * @param a array of const int.
 * @param aEnd a pointer to past-the-end of a.
 * @param b array of const int.
 * @param bEnd pointer to past-the-end of b.
 *
 * @pre #aEnd and #bEnd are > a and b
 *
 * @return true if a and b have the "same set" as described above.
 * @examples:
 *      1  4  9  16  9  7  4  9  11 and 11  11  7  9  16  4  1 are same set
 *      3 1 1 11 and 3 11 11 7 are not the same set because b contains a 7
 *
 */
bool sameSet(const int *aBeg, const int *aEnd,
             const int *bBeg, const int *bEnd);

#endif
