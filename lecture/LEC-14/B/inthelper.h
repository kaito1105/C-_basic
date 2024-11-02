/**
 * CS 150 exception exercises.
 * @author Steve Gilbert
 * @version Spring 2018
 * @file "inthelper.h"
 */
#ifndef INTHELPER_H
#define INTHELPER_H

#include <string>
#include <stdexcept>

/**
 * Converts a string to an integer.
 * @param str the string to convert.
 * @pre str will contain valid digits and an optional sign ("-123").
 * @exception invalid_argument if str contains invalid characters.
 * @return the integer result.
*/
int parseInt(const std::string& str);

/**
 * Reads and integer from the console.
 * @param prompt will be displayed if passed with a colon.
 * @return the int read.
 * @post keeps prompting until a valid interger entered.
*/
int readInt(const std::string& prompt="");

#endif