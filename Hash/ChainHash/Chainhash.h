#ifndef __CHAINHASH_H__
#define __CHAINHASH_H__

#include "Member.h"

typedef struct __node
{
  Member member;
  struct __node *next;
} Node;

typedef struct __chainhash
{
  int size;
  Node **ChainNode; /* Node Pointer Array; Each element contains Node Pointer that's why it is set as double pointer */
} ChainHash;

void Initialize(ChainHash *chain, int size); /* function that initializes the hashtable including allocation, setting size of table */

Node *SetNodeInfo(Member mem, Node *next); /* function that sets the information of the Node */

int HashFunc(char *name, ChainHash *chain); /* function that gives the hash key using name of member */

int Add(ChainHash *chain, Member data); /* function that adds the new node to hash table */

int Delete(ChainHash *chain, char *name); /* function that deletes the node in hashtable */

int Search(ChainHash *chain, char *name); /* function that finds the node in hashtable using name or no; sw is MEMBER_NAME or MEMBER_NO */

void Terminate(ChainHash *chain);

void PrintHash(ChainHash *chain); /* function that prints the all nodes in hashtable in order of the keys */

#endif
