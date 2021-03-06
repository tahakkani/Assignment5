/*
* An array of indicies. Each element of the array
* is a pointer to a linked list of hashed entries
* that share the same index.
*
* @author Taha Hakkani
* @credit Yanping Zhang (for template)
* @version Assignment 5
* @date March 28 2019
* @file Entry.h
*/
#ifndef _HASHED_DICTIONARY
#define _HASHED_DICTIONARY
#include "HashedEntry.h"
#include "Entry.h"

class HashedDictionary
{
private:
  HashedEntry * hashTable[101];

  int itemCount;//# of items/entries in the table
  int hashTableSize;// # of occupied indexes
  static const int DEFAULT_SIZE = 101;

  int hashFunc (KeyType & Key); // modulo: searchKey%DEFAULT_SIZE

public:

  HashedDictionary ();

  ~ HashedDictionary ();

  bool isEmpty () const;

  int getNumberOfItems () const;

  void add (const KeyType & Key, const ItemType & newItem);

  bool remove (const KeyType & Key);

  void clear ();

  ItemType search (const KeyType & Key) const;


  bool contains (const KeyType & Key) const;

};  // end HashedDictionary

#endif
