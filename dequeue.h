/**
 *  @file dequeue.h
 *  @version 0.0.0
 *  @date Tue Dec 17 23:56:08 CST 2019
 *  @copyright %COPYRIGHT%
 *  @brief FIXME
 *  @details FIXME
 */

#ifndef _DEQUEUE_H_
#define _DEQUEUE_H_

#ifdef  _PACKAGE_NAME
#undef  _PACKAGE_NAME
#endif
#define _PACKAGE_NAME "dequeue"

struct dequeue;

/**
 *  @brief Constructor.
 *  @details Create and return a new dequeue object.
 *  @returns New dequeue object.
 */
struct dequeue *dequeue_new(void);

/**
 *  @brief Destructor.
 *  @details Clean up and free a dequeue structure.
 *  @param[in, out] p.
 */
void        dequeue_free(struct dequeue **pp);

/**
 *  @brief Initialize a dequeue object.
 *  @details FIXME longer description here ...
 *  @param[in,out] p Pointer to a dequeue object
 *  @param[in] x FIXME
    @returns FIXME
 */
int         dequeue_init(struct dequeue *p, void *x);

/**
 *  @brief Return the version of this package.
 *  @returns Version string.
 */
const char *dequeue_version(void);

#endif