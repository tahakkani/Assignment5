/*
* A class of entry objects for a hashing implementation of the
* ADT dictionary.
*
* @author Taha Hakkani
* @credit Yanping Zhang (for template)
* @version Assignment 5
* @date March 28 2019
* @file HashedEntry.h */
#ifndef _HASHED_ENTRY
#define _HASHED_ENTRY
#include "Entry.h"

class HashedEntry:public Entry
{
private:
  HashedEntry * nextPtr;
public:
  HashedEntry ();
  ~HashedEntry ();
  HashedEntry (KeyType & key, ItemType & newEntry);
  HashedEntry (KeyType & key, ItemType & newEntry, HashedEntry *nextEntryPtr);
  void setNext (HashedEntry *nextEntryPtr);

  HashedEntry *getNext ()const;
};  // end HashedEntry

#endif
