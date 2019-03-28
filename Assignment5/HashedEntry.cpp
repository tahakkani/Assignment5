#include "HashedEntry.h"
HashedEntry::HashedEntry (){}

HashedEntry::~HashedEntry (){}

HashedEntry::HashedEntry (KeyType & key, ItemType & newEntry){
	searchKey = key;
  item = newEntry;
}

HashedEntry::HashedEntry (KeyType & key, ItemType & newEntry, HashedEntry *nextEntryPtr){
	searchKey = key;
  item = newEntry;
  nextPtr = nextEntryPtr;
}

void HashedEntry::setNext (HashedEntry *nextEntryPtr){
  nextPtr = nextEntryPtr;
}

HashedEntry* HashedEntry::getNext ()const{
  return nextPtr;
}
