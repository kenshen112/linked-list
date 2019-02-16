/***********************************************************************
 * Header:
 *    INSERTION SORT
 * Summary:
 *    This will contain just the prototype for insertionSortTest(). You may
 *    want to put other class definitions here as well.
 * Author
 *    <your names here>
 ************************************************************************/

#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include "node.h"

/***********************************************
 * INSERTION SORT
 * Sort the items in the array
 **********************************************/
template <class T>
void sortInsertion(T array[], int num)
{
 // 1. insert elements from array[] into a linked list
   Node <T> *pFront = new Node <T>;

   for (int i = 0; i < num; i++)
   {
      if (pFront == NULL) //if it's the first element
      {
         pFront = insert(pFront, array[i]);
      }
      else
      {
         Node <T> *n = pFront;
         while(array[i] >= n->data)
         {
            if(n->pNext != NULL)
            {
               n = n->pNext;
            }
            else
               break;
         }
         if(n->pNext != Null)
         {
            insert(array[i], n);
         }
         else
         {
            insert(array[i], n, true);
         }

      }

   }

   
   // copy the elements to the array
   for (int j = 0; j < num; j++)
   {
      array[j] = pFront->data;
      pFront = remove(pFront);
   }

}

#endif // INSERTION_SORT_H

