
//Partial score of  66, don't know why

import java.util.Scanner;

public class Main {

		public static void main(String[] args) {
			Scanner s = new Scanner(System.in);

			int board[][] = new int[9][9];
			for(int i = 0; i < 9; i++){
				for(int j = 0; j < 9; j++){
					board[i][j] = s.nextInt();
				}
			}
			System.out.println(Solution.sudokuSolver(board));	
		}



}



public class Solution {
	
	
	static int row=0,col=0;
	
    static boolean findEmptyLocation(int grid[][]){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(grid[i][j]==0){
                    row=i;
                    col=j;
                    return true;
                }
            }
        }
        return false;
    }
    
    static boolean isSafeInRow(int grid[][], int row,int col,int num){
        for(int i=0;i<9;i++){
            if(grid[row][i]==num){
                return false;
            }
        }
        
        return true;
}
    
 
    static boolean isSafeInColumn(int grid[][], int row,int col,int num){
          for(int i=0;i<9;i++){
            if(grid[i][col]==num){
                return false;
            }
        }
        
        return true;
        
}   
    
    
    static boolean isSafeInGrid(int grid[][], int row,int col,int num){
        
        int rowFactor=row-(row%3);
        int colFactor=col-(col%3);

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
             if(grid[i+rowFactor][j+colFactor]==num){
                 return false;
             }   
            }
        }
        
        return true;
    }
    
    static boolean isSafe(int grid[][],int row,int col,int num){
        if(isSafeInRow(grid,row,col,num) && isSafeInColumn(grid,row,col,num) && isSafeInGrid(grid,row,col,num)){
            return true;
        }
        return false;
        
    }
    public static boolean sudokuSolver(int board[][]){
		
	/* Your class should be named Solution.
	 * Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Don't print output and return output as specified in the question.
	 */
     if(!findEmptyLocation(board)){
         return true;
     }
        
        
        for(int i=1;i<=9;i++){
            if(isSafe(board,row,col,i)){
                board[row][col]=i;
                if(sudokuSolver(board)){
                    return true;
                }
                
                board[row][col]=0;
            }
        }
        
        return false;
		
	}

	
	
}
