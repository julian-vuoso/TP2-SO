/***************************************************
    MemoryManager.h
****************************************************/

#ifndef _MEMMANAGER_H_
#define _MEMMANAGER_H_

/* Memory Manager builder */
void create_manager(uint8_t * address, uint64_t pageSize, uint64_t maxPages);

/* Memory Manager user functions */

/* Reserves bytes space on memory */
void * malloc(uint64_t bytes);

/* Frees space on memory */
void free(void * ptr);

/* Gets memory status */
void status(uint64_t * total, uint64_t * occupied, uint64_t * free);

/* Prints memory status */
void printStatus();

/* Returns the first address from the next block, 
** assuming ptr is a valid return from malloc */
void * getLastAddress(void * ptr);

/* Prints memory state */
void printMemState();

#endif