#include <stdlib.h>
#include <stdio.h>
#include <float.h>
#include <math.h>
#include <string.h>
#include "dequeue.h"
#include "t/tinytest.h"

#ifdef  _COLOR_CODE
#undef  _COLOR_CODE
#endif
#define _COLOR_CODE       0x1B

#ifdef  _COLOR_RED
#undef  _COLOR_RED
#endif
#define _COLOR_RED        "[1;31m"

#ifdef  _COLOR_GREEN
#undef  _COLOR_GREEN
#endif
#define _COLOR_GREEN      "[1;32m"

#ifdef  _COLOR_YELLOW
#undef  _COLOR_YELLOW
#endif
#define _COLOR_YELLOW     "[1;33m"

#ifdef  _COLOR_RESET
#undef  _COLOR_RESET
#endif
#define _COLOR_RESET      "[0m"

static void
_printf_test_name(char *name, char *info)
{
   printf("%c%s%s%c%s", _COLOR_CODE, _COLOR_YELLOW, name, _COLOR_CODE, _COLOR_RESET);

   if (NULL != info)
      printf(" [%s]\n", info);
   else
      printf("\n");
}

static int
_two_doubles_equal(double x, double y)
{
   double      t = fabs(x) + fabs(y);
   return fabs(x - y) < 4 * DBL_EPSILON * t ? 1 : 0;
}

static void
test_constr(void)
{
   struct dequeue *z;

   _printf_test_name("test_constr", "dequeue_new, dequeue_free");

   z = dequeue_new();
   ASSERT("Constructor test", z);
   dequeue_free(&z);
   ASSERT_EQUALS(NULL, z);
}

#if 0                                            /* 16 yy */
static void
test_stub(void)
{
   struct dequeue *z;
   double      x = 1.23;                    /* TODO */

   _printf_test_name("test_stub", NULL);

   z = dequeue_new();
   ASSERT("Constructor test, pt 1", z);
   ASSERT("Here's a test ...", _two_doubles_equal(x, 1.23));
   ASSERT_EQUALS(10, 10);

   dequeue_free(&z);
   ASSERT_EQUALS(NULL, z);
}
#endif

int
main(void)
{
   printf("%s\n", dequeue_version());

   RUN(test_constr);

   return TEST_REPORT();
}