/***********************************************************************
 * Header:
 *    INSERTION SORT
 * Summary:
 *    This will contain just the prototype for insertionSortTest(). You may
 *    want to put other class definitions here as well.
 * Authors
 *      Ken Smith
 *      Jessica Smith
 *      Tim O'Barr
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
   Node <T> *pFront = new Node <T>; //No pHead?
   bool first = true;
   
   for (int i = 0; i < num; i++)
   {
      
      if(first)
      {
         pFront->data = array[i];
         first = false;
      }
      else
      {
         if(pFront->data > array[i])
         {
            pFront = insert(array[i], pFront);
         }
         else
         {
            Node <T> *n = pFront; //though it shoulld assign here it doesn't. hence my comment ;) Tim. yup
            while(array[i] >= n->data)
            {
               if(n->pNext != nullptr)
               {
                  n = n->pNext;
               }
               else
                  break;
            }
            if(array[i] >= n->data)
            {
               insert(array[i], n, true);
            }
            else
            {
               insert(array[i], n);
            }
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

