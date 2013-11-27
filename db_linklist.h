/*
 * =====================================================================================
 *
 *       Filename:  db_linklist.h
 *        Version:  1.0
 *        Created:  2013年11月27日 17时25分56秒
 *       Revision:  none
 *       Compiler:  clang
 *         Author:  sim szm, xianszm007@gmail.com
 *        Company:  Class 1107 of Computer Science and Technology
 *
 * =====================================================================================
 */
#ifndef DB_LINKLIST_H
#define DB_LINKLIST_H

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

extern int errno;

typedef struct db_lnode{
	void* data;
	struct db_lnode* prev;
	struct db_lnode* next;
}db_lnode_t;
typedef struct db_list{
	int limit_size;
	db_lnode_t* head;
	db_lnode_t* tail;
}db_list_t;

db_list_t* db_list_create(void );
static inline int __db_list_insert_before(db_list_t** ,int ,void* );
static inline int __db_list_insert_after(db_list_t** ,int ,void* );
static inline void __db_lnode_flush(db_list_t* ,int ,void* );
static inline void __db_list_delete(db_list_t** ,int );
static inline void __db_list_destory(db_list_t* );
static inline void* __db_list_visit(db_list_t** ,int );
static inline void __db_list_travel(db_list_t* ,void(*do_function)(void* ));
static inline int __db_list_search(db_list_t** ,void* ,int(*compare)(void* ,void* ));

#endif
