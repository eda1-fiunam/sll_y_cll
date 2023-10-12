


#include <stdlib.h>
// para malloc and friends y size_t

#include <stdbool.h>
// para bool and friends

#include "SLL.h"



//----------------------------------------------------------------------
//  Driver program
//----------------------------------------------------------------------
int main()
{
   SLL* lista = SLL_New();


	
   SLL_Delete( &lista );
}
