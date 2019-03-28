int hashFunc (KeyType & Key){
	return key % DEFAULT_SIZE;
}

HashedDictionary ();

  ~ HashedDictionary ();

  bool isEmpty () const;

  int getNumberOfItems () const;

  void add (const KeyType & Key, const ItemType & newItem);

  bool remove (const KeyType & Key);

  void clear ();

  ItemType search (const KeyType & Key) const;


  bool contains (const KeyType & Key) const;
