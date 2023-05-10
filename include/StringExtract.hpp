/**
 * @file StringExtract.hpp
 * @author Alexander Scholz (scholzalexander06@gmail.com)
 * @brief File which holds various Methods for working with strings
 * @version 0.1
 * @date 2023-05-02
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

namespace str_extract
{
    /**
     * @param input The string which is wanted to be split up into multiple pieces
     * @param limiter Which character seperates the input
     * @brief Splits a string into a vector on a specific
     * condition/seperator/character
     * @return A vector containing all elements which were able to be extracted by
     * the method
     */

    vector<string> Split(const string &input, char limiter);
    /**
     * @param input The string from which the specific substrings should be
     * extracted
     * @param in_limiter The character which indicates the start of a substring
     * @param out_limiter The character which indicates the end of a substring
     * @brief Extracts substrings out of an existing string. This happens on a
     * specific start and end character
     * @return A vector which contains all substrings which were able to be
     * extracted
     */
    vector<string> ExtractSubStr(const string &input, char in_limiter,
                                 char out_limiter);

    /**
     * @param input The string which should be trimmed
     * @brief Removes spaces and newlines at the end and beginning of a string
     * @return The input string without any trailling white-spaces
     */
    void Trim(string &input);

    /**
     * @param base The base string which should be checked for the substring
     * @param search The substring for which should be checked in base
     * @brief Checks if a given substring is contained in a base string
     * @return If the string is contained
    */
    bool Contains(const string &base, const string &search);


} // namespace str_extract