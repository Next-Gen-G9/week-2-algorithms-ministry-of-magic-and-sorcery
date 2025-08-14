#ifndef BOOK_H
#define BOOK_H

#include <string> // Required for std::string
using namespace std;

// STUDENT TASK: Define the structure for a Book.
// This exercise covers: struct, std::string
//
// 1. Define a struct named 'Book'.
struct Book {
// 2. Add the following member variables inside the struct:
//    - an 'int' named 'id'
//    - a 'std::string' named 'title'
//    - a 'std::string' named 'author'
//    - a 'bool' named 'isAvailable'
//
Book int id;
std::string title;
std::string author;
bool isAvailable; 
    // Add member variables here

#endif // BOOK_H