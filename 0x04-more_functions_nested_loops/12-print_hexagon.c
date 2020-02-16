#include <stdio.h>

int main()
{
	int rows;
	int spaces;
	int hexagon;
	int shortsidehexagon;
	
	hexagon = 9; /** pick any size **/
	shortsidehexagon = 2 * hexagon - 1;
	
	
	for (rows = 1; rows <= 2 * hexagon - 1; rows++)
	{
	    for (spaces = 1; spaces <= hexagon + (hexagon - 1) * 2; spaces++)
	    {
	        if (spaces <= hexagon - rows)    /** upper left **/
	        {
	            putchar(' ');
	        }
	        else if (spaces >= (hexagon * 2) + rows - 1) /** upper right **/ 
	        {
	            putchar (' ');
	        }
	        
	        else if (rows >= hexagon && spaces <= rows - hexagon) /** bottom left **/
	        {
	            putchar (' ');
	        
	        }
	        else if (rows >= hexagon && spaces >= hexagon && spaces >= shortsidehexagon - rows + (hexagon * 2))
	        {
	            putchar (' ');
	        }
	        else
	  
	             putchar('#');  
	       
	        
	   
	    }
	
	    putchar('\n');   
	}
	    
}
