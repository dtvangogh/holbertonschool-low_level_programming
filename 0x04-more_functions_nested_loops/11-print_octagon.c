#include <stdio.h>

int main()
{
	int rows;
	int spaces;
	int side_of_octagon;
	int size_of_square;
	
	side_of_octagon = 8; /** pick whatever value you want **/
	size_of_square = side_of_octagon + ((side_of_octagon - 1) * 2);
	
	for (rows = 1; rows <= size_of_square; rows++)
	{
	    for (spaces = 1; spaces <= size_of_square; spaces++)
	    {
	        if (spaces <= side_of_octagon - rows)
	        {
	            putchar (' ');
	            
	           
	        }
	        else if (spaces >= (side_of_octagon * 2) + rows - 1)
	        {
	            putchar (' ');
	        }
	       
	        else if ((rows >= side_of_octagon * 2 && spaces <= rows - (side_of_octagon * 2) + 1))
	        {
	            putchar (' ');
	        }
	        else if (rows >= side_of_octagon * 2 && spaces >= side_of_octagon * 2 && spaces >= size_of_square - (rows - (side_of_octagon * 2)))
	        {
	            putchar (' ');
	        }
	   
	  
	        else
	        
	       putchar('#');  
	       
	        
	   
	    }
	
	    putchar('\n');   
	}
	    
