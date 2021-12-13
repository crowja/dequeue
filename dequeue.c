/**
 *  @file dequeue.c
 *  @version 0.1.0-dev0
 *  @date Sun Feb 16, 2020 04:35:23 PM CST
 *  @copyright 2020 John A. Crow <crowja@gmail.com>
 *  @license Unlicense <http://unlicense.org/>
 */

#include <stdlib.h>
#include <stdio.h>                               /* FIXME */
#include <string.h>                              /* FIXME */
#include "dequeue.h"

#ifdef  IS_NULL
#undef  IS_NULL
#endif
#define IS_NULL(p)   ((NULL == (p)) ? (1) : (0))

#ifdef  FREE
#undef  FREE
#endif
#define FREE(p)      ((NULL == (p)) ? (0) : (free((p)), (p) = NULL))

struct dqnode {
   struct dqnode *next;
   struct dqnode *prev;
};

struct dequeue {
   void       *x;
   struct dqnode *head;
   struct dqnode *tail;
};

struct dequeue *
dequeue_new(void)
{
   struct dequeue *tp;

   tp = (struct dequeue *) malloc(sizeof(struct dequeue));
   if (IS_NULL(tp))
      return NULL;

   tp->head = NULL;
   tp->tail = NULL;

   return tp;
}

void
dequeue_free(struct dequeue **pp)
{

   /* Do some magic here ... */

   FREE(*pp);
   *pp = NULL;
}

const char *
dequeue_version(void)
{
   return "0.1.0-dev0";
}

int
dequeue_init(struct dequeue *p, void *x)
{

   /* Do some magic here ... */
   p->x = x;                                     /* FIXME */

   return 0;
}

int
dequeue_head_pop(struct dequeue *p)
{
   return 0;
}

int
dequeue_head_push(struct dequeue *p)
{
   return 0;
}

#undef  IS_NULL
#undef  FREE
