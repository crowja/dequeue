/**
 *  @file dequeue.h
 *  @version 0.1.0-dev0
 *  @date Sun Feb 16, 2020 04:35:23 PM CST
 *  @copyright 2020 John A. Crow <crowja@gmail.com>
 *  @license Unlicense <http://unlicense.org/>
 */

#ifndef DEQUEUE_H
#define DEQUEUE_H

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
