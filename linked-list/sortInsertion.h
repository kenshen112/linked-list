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
   Node <T> *pFront = NULL;

   for (int i = 0; i < num; i++)
   {
      if (pFront == NULL) //if it's the first element
      {
         pFront = insert(pFront, array[i]);
      }
      else if (pFront != NULL)
      {
         Node <T> * n = pFront;
         if (pFront->pNext != NULL) //if there is another node in the list
         {
            while ()
            {

               if (array[i] <= *pFront->data)
               {
                  *pFront->pPrev = insert(pFront, array[i]); //assigns the pointer to the new Node to the pPrev pointer of pFront
                  *pFront = pFront->pPrev; //changes pFront to be the Node that we just inserted before the old pFront
               }
               else if (array[i] > )
               {
                  *pFront->pNext = insert(pFront, array[i], after = true);

               }
            }
         }
         else
         {

         }

      }

   }

   // copy the elements to the array
  for (int j = 0; j < num; j++)
   {
      array[j] = *pFront->data;
      pFront = remove(pFront);
   }

}

#endif // INSERTION_SORT_H

