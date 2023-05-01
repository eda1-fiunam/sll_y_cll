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


#ifndef  CLL_INC
#define  CLL_INC

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

typedef struct Node
{
	int data;
	struct Node* next;
} Node;

typedef struct CLL
{
	Node* first;
	Node* last;
	Node* cursor;
	size_t len;
} CLL;

CLL*   CLL_New();
void   CLL_Delete(       CLL** this );
void   CLL_Push_front(   CLL* this, int data );
void   CLL_Push_back(    CLL* this, int data );
void   CLL_Insert(       CLL* this, int data );
int    CLL_Get(          CLL* this );
void   CLL_Pop_front(    CLL* this );
size_t CLL_Len(          CLL* this );
bool   CLL_Is_empty(     CLL* this );
void   CLL_Make_empty(   CLL* this );
void   CLL_Cursor_front( CLL* this );
void   CLL_Cursor_back(  CLL* this );
void   CLL_Cursor_next(  CLL* this );
void   CLL_Cursor_prev(  CLL* this );
bool   CLL_Find_if(      CLL* this, int key );
bool   CLL_Find(         CLL* this, int key );
void   CLL_Erase(        CLL* this );
void   CLL_Remove(       CLL* this, int key );

#endif   /* ----- #ifndef CLL_INC  ----- */
