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

#include "CLL.h"

// newNode es una función privada, por eso su nombre está fuera 
// del patrón y además no tiene prototipo en el archivo de encabezados.
static Node* newNode( int data )
{
	Node* n = (Node*) malloc( sizeof( Node ) );
	if( n ){
		n->data = data;
		n->next = NULL;
	}
	return n;
}

/**
 * @brief Crea una nueva lista CLL
 * @return Referencia a la nueva lista
 */
CLL* CLL_New()
{

}

/**
 * @brief Destruye una lista CLL
 * @param this Referencia a un objeto CLL
 * @post La lista se destruyó y no debiera ser utilizado de nuevo
 */
void CLL_Delete( CLL** this )
{
   assert( *this );

   // primero borra todos los nodos

   // luego borra al propio objeto this

   // luego hace que this sea NULL
}

/**
 * @brief Indica si la lista está vacía
 * @param this Referencia a un objeto CLL
 * @return true si la lista está vacía; false en cualquier otro caso
 */
bool CLL_Is_empty( CLL* this )
{

}

void CLL_Push_front( CLL* this, int data )
{

}

void CLL_Push_back( CLL* this, int data )
{
	Node* n = newNode( data );
	if( n )
   {
		if( CLL_Is_empty( this ) )
      {
			this->first = this->last = this->cursor = n;
		}
		else{
			this->last->next = n;
			this->last = n;
		}
		++this->len;
	}
}

void CLL_Insert( CLL* this, int data )
{

}

void CLL_Pop_front( CLL* this )
{
   assert( this->first );
   // error fatal si la lista está vacía

	Node* tmp = this->first->next;
	free( this->first );
	this->first = tmp;
	--this->len;
}

/**
 * @brief Devuelve una copia del elemento indicado por el cursor. El
 * comportamiento es indefinido si el cursor no apunta a una posición
 * válida.
 * @param this Referencia a un objeto CLL.
 * @return Una copia del elemento indicado por el cursor
 */
int CLL_Get( CLL* this )
{
   assert( this->first );
   // error fatal si la lista está vacía

   assert( this->cursor );
   // error fatal si el cursor no apunta a una posición válida

}

void CLL_Cursor_front( CLL* this )
{
	this->cursor = this->first;
}

void CLL_Cursor_back( CLL* this )
{
	this->cursor = this->last;
}

/**
 * @brief Mueve al cursor al siguiente elemento a la derecha.
 * @param this Referencia a un objeto CLL.
 * @return true si el cursor se pudo mover a la derecha; 
 *         false en caso contrario.
 * @post El cursor NO se mueve si a la entrada apuntaba a NULL.
 */
void CLL_Cursor_next( CLL* this )
{
	if( this->cursor != NULL ){
		this->cursor = this->cursor->next;
   }
}

/**
 * @brief Vacía la lista sin destruirla.
 * @param this Referencia a un objeto CLL.
 * @post La lista queda vacía.
 */
void CLL_Make_empty( CLL* this )
{

}

/**
 * @brief Busca si un elemento está en la lista.
 * @param this Referencia a un objeto CLL.
 * @param key El valor que estamos buscando.
 * @return true si se encontró una coincidencia; false en caso contrario.
 * @post Coloca al cursor en el nodo en el que se hubiera encontrado una
 * coincidencia
 */
bool CLL_Find_if( CLL* this, int key )
{
	bool found = false;
	
	if( !CLL_Is_empty( this ) ){

		for( Node* it = this->first; it->next != NULL && found == false ; it = it->next ){

			if( key == it->data ){
         // si el dato es compuesto, entonces esta instrucción deberá 
         // modificarse

				this->cursor = it;
				found = true;
			}
		}
	}
	return found;
}

bool CLL_Find( CLL* this, int key, int* data )
{

}

/**
 * @brief Devuelve el número de elementos actualmente en la lista.
 * @param this Referencia a un objeto CLL.
 * @return El número de elementos actualmente en la lista.
 */
size_t CLL_Len( CLL* this )
{

}
