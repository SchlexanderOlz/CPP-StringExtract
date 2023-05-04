#include "../include/StringExtract.hpp"

vector<string> str_extract::Split(const string &input, char limiter)
{
    vector<string> result;
    string element;
    istringstream reader(input);
    // Goes trough the input string, goes from limiter to limiter and returns the
    // values inbetween
    while (getline(reader, element, limiter))
    {
        result.push_back(element);
    }
    result.erase(remove_if(result.begin(), result.end(),
                           [](auto &content)
                           { return content.empty(); }),
                 result.end());
    return result;
}

vector<string> str_extract::ExtractSubStr(const string &input,
                                          char in_limiter,
                                          char out_limiter)
{
    vector<string> substrings;
    size_t current_index = 0;

    while (true)
    {
        size_t in_index = input.find(in_limiter, current_index);

        if (in_index == string::npos)
        {
            break;
        }

        size_t out_index = input.find(out_limiter, in_index);

        if (out_index == string::npos)
        {
            break;
        }

        substrings.emplace_back(
            input.substr(in_index + 1, out_index - (in_index + 1)));
        current_index = out_index;
    }

    return substrings;
}

void str_extract::Trim(string &str)
{
    auto start = find_if(str.begin(), str.end(),
                         [](unsigned char ch)
                         { return ch != ' ' && ch != '\n'; });
    // Reverse iterator to find the first non-space element
    auto end = find_if(str.rbegin(), str.rend(), [](unsigned char ch)
                       { return ch != ' ' && ch != '\n'; })
                   .base();
    // If the start and end indexes fall back on eachother the string is empty
    
    str = (start < end) ? string(start, end) : "";
}