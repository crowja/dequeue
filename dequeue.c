/**
 *  @file dequeue.c
 *  @version 0.0.1-dev0
 *  @date Wed Jan  1 21:50:34 CST 2020
 *  @copyright 2020 John A. Crow <crowja@gmail.com>
 *  @license Unlicense <http://unlicense.org/>
 */

#include <stdlib.h>
#include <stdio.h>                               /* FIXME */
#include <string.h>                              /* FIXME */
#include "dequeue.h"

#ifdef  _IS_NULL
#undef  _IS_NULL
#endif
#define _IS_NULL(p)   ((NULL == (p)) ? (1) : (0))

#ifdef  _FREE
#undef  _FREE
#endif
#define _FREE(p)      ((NULL == (p)) ? (0) : (free((p)), (p) = NULL))

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
   if (_IS_NULL(tp))
      return NULL;

   tp->head = NULL;
   tp->tail = NULL;

   return tp;
}

void
dequeue_free(struct dequeue **pp)
{

   /* Do some magic here ... */

   _FREE(*pp);
   *pp = NULL;
}

int
dequeue_init(struct dequeue *p, void *x)
{

   /* Do some magic here ... */
   p->x = x;                                     /* FIXME */

   return 0;
}

const char *
dequeue_version(void)
{
   return "0.0.1-dev0";
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

#undef  _IS_NULL
#undef  _FREE
