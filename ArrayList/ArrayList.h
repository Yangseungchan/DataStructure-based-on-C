#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define TRUE 1
#define FALSE 0

#define LIST_LEN 100

typedef struct __ArrayList{
    int arr[LIST_LEN];
    int numofData; /* the number of the datas in arraylist */
    int curPosition; /* the variable that indicates the last(top) position of data in arraylist */
}ArrayList;

typedef ArrayList List;

void ListInit(List *plist); /* function that initializes the ArrayList */

int LInsert(List *plist, int data); /* function that inserts a new data */

void ListPrint(List *plist); /* function that prints the whole datas of the list */

int LRemove(List *plist); /* function that deletes the last component in arraylist */

int LCount(List *plist); /* function that returns the number of the data in arraylist */


#endif