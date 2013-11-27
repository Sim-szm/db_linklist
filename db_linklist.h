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
	int size;
	db_lnode_t* head;
	db_lnode_t* tail;
}db_list_t;

db_list_t* create_list(void );

#endif
