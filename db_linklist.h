/*
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU Library General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc.
#
# See the COPYING file for license information.
#
#Copyright (c) 2013  sim szm <xianszm007@gmail.com>
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
