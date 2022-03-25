/*Copyright (C) 
 * 2022 - francisco dot rodriguez at ingenieria dot unam dot edu
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 * 
 */


#ifndef  SLL_INC
#define  SLL_INC

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

typedef struct Node
{
	int data;
	struct Node* next;
} Node;

typedef struct SLL
{
	Node* first;
	Node* last;
	Node* cursor;
	size_t len;
} SLL;

SLL*   SLL_New();
void   SLL_Delete(       SLL** this );
void   SLL_Push_front(   SLL* this, int data );
void   SLL_Push_back(    SLL* this, int data );
void   SLL_Insert(       SLL* this, int data );
int    SLL_Get(          SLL* this );
void   SLL_Pop_front(    SLL* this );
size_t SLL_Len(          SLL* this );
bool   SLL_Is_empty(     SLL* this );
void   SLL_Make_empty(   SLL* this );
void   SLL_Cursor_front( SLL* this );
void   SLL_Cursor_back(  SLL* this );
void   SLL_Cursor_next(  SLL* this );
bool   SLL_Find_if(      SLL* this, int key );
bool   SLL_Find(         SLL* this, int key );

#endif   /* ----- #ifndef SLL_INC  ----- */
