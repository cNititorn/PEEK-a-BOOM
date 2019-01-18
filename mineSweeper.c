#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <time.h>
#include <curses.h>

    int main(); //still fixing
    void printMenu(); //done
    void printPlay(); //done
    void printCredit(); //fixed 29 Sept 2018
    void printLogo(); //done
    void logicGame(int ); //still fixing, printWin and continueWin
    void printTutorial(); //done
    void createTable4x4(); //done
    void exSurvive4x4(); //done
    void exBomb4x4(); //done
    void printQuit();

    
    int main(){
        int userInput, returnCheck;
        char playCheck = 1;

       
        printMenu();
    do{
        printf("Please use number to select: ");
        scanf("%d",&userInput);
        if(userInput>4||userInput<1){
            printf("Can enter only 1-4\n");
            scanf("%d",&userInput);
        }
        else{
            switch(userInput){
                
                case 1: system("clear");
                        printPlay();
                        break;

                case 2: system("clear");
                        printTutorial();
                        break;

                case 3: system("clear");
                        printCredit();
                        break;

                case 4: system("clear");
                        printQuit();
                        playCheck = 0;
                        break;
            }
        }
    }while(playCheck == 1);
    
    return 0;
    }
    
    void printLogo(){
        printf("\n\n");
        printf("\t**********************************************************************************************************\n");
        printf("\t*                                                                                                        *\n");
        printf("\t*   *****   *****  *****  **   **           **          *****     *****      *****    **       **        *\n");
        printf("\t*   **  **  **     **     ** **           **  **        **  **   **   **    **   **   ** ** ** **        *    *           \n");
        printf("\t*   ** **   *****  *****  ** *     *****  ****** *****  *****   **     **  **     **  **  ***  **        *  **            \n");
        printf("\t*   **      **     **     ** **           **  **        **  **   **   **    **   **   **       **         ***           \n");
        printf("\t*   **      *****  *****  **   **         **  **        *****     *****      *****    **       **      ********           \n");
        printf("\t*                                                                                                    *** ***  ***         \n");
        printf("\t*************************************************************************************************** ***  *  *  ***        \n");
        printf("\t                                                                                                   ***   ***    ***       \n");
        printf("\t                                                                                                    ***  *  *  ***        \n");
        printf("\t                                                                                                     *** ***  ***         \n");
        printf("\t                                                                                                       ********           \n");
        printf("\n\n");
}
    void printMenu(){
    
        int r;

        printLogo();
        printf("\n\n");
        printf("\t\t\t\t\t\t         %c 1. Play",175);
        printf("\n\n");
        printf("\t\t\t\t\t\t         %c 2. How to Play",175);
        printf("\n\n");
         printf("\t\t\t\t\t\t         %c 3. Credit",175);
        printf("\n\n");
        printf("\t\t\t\t\t\t         %c 4. Quit",175);
        printf("\n\n");
        for(r=0;r<3;r++){
            printf("\n");
        }
}
    void printPlay(){
    
        int r,userInput,loopCheck = 1,loopCheckk=1;
        int rowColumn,inputChecker;

        printLogo();                                                         
        printf("\n\n");
        printf("\t\t\t\t\t         %c %c. Play   4x4",175,49);
        printf("\n\n");
        printf("\t\t\t\t\t         %c %c. Play   8x8",175,50);
        printf("\n\n");
        printf("\t\t\t\t\t         %c %c. Play   10x10",175,51);
        printf("\n\n");
        printf("\t\t\t\t\t         %c %c. customize your game",175,52);
        printf("\n\n");
        printf("\t\t\t\t\t         %c %c. back to main menu",175,53);
        printf("\n\n");
        for(r=0;r<3;r++){
        printf("\n");
        }
        printf("Please use number to select: ");
        
        do{
        
        scanf("%d",&userInput);

        if(userInput < 1 || userInput > 6){
            printf("Try again(1-5)");
            scanf("%d",&userInput);
        }
        
        else{

        do{  
            switch(userInput){
                
                case 5: system("clear");
                        printMenu();
                        loopCheck = 0;
                        loopCheckk = 0;
                        break;

                case 1: logicGame(4);
                        loopCheck = 0;
                        loopCheckk = 0;
                        break;

                case 2: logicGame(8);
                        loopCheck = 0;
                        loopCheckk = 0;
                        break;
                case 3: logicGame(10);
                        loopCheck = 0;
                        loopCheckk = 0;
                        break;

                case 4: system("clear");
                        printLogo();
                        printf("Please enter Row/Column (2-15)\n");
                        
                        do{
                        scanf("%d",&rowColumn);
                        
                        if(rowColumn > 1 && rowColumn < 16){
                            logicGame(rowColumn);
                            inputChecker = 0;
                        }
                        else{
                            printf("You can enter only 1-15\n");
                            printf("Try again: ");
                        }
                    
                    }while (inputChecker==0);
                
                    loopCheck = 0;
                    loopCheckk = 0;
                }
            }while(loopCheck == 1);
        }

    }while(loopCheckk == 1);
}
    void printCredit(){
    
        int r,checkCheck = 1;
        
        getchar();
        printLogo();
        printf("\n\n");
        printf("\t\t\t\t\t              %c%c Created by %c%c\n\n",175,175,174,174);
        printf("\t\t\t                      Piyapon   Suddee      1811310158\n");
        printf("\t\t\t                      Supavich  Piromkloy   1811310679\n");
        printf("\t\t\t                      Nititorn  Chawanpunya 1811310687\n");
        printf("\t\t\t                      Siripat   Tuncharuen  1811310331\n");
        printf("\n\n");
        printf("\t\t\t\t\t              %c%c Advised by %c%c\n\n",175,175,174,174);
        printf("\t\t\t                          Worawut   Chitkchornwanit      \n");
        printf("\t\t\t                          Goragod   Pongthanisorn         \n");
        printf("\n\n\n");
        printf("\t\t\tThis project is part of CPE 101: Introduction to Computer Programming.\n\n");
        printf("\t\t\t                Thai-Nichi Institute of Technology");

        for(r=0;r<3;r++){
            printf("\n");
        }
    
        printf("Press Enter to back to main menu\n");
        getchar();
        
        system("clear");
        printMenu();
}
    void logicGame(int tableSize){

        char mineField[15][15];
        char userAnswer;
        int randomedMine[15][15] = {0};
        int arrayCheck[15][15] = {0};
        int winCondition[15][15] = {0};
        int winCheck=0;
        int mineCounter=0;
        int mineChecker;
        int randomNum,randomNumm;
        int rowField,columnField,i,j;
        int loopBreaker = 1;
        int answerCheck = 1;
        int fieldTotal;
        int mineCheck=0;
        int fieldRemain;

        system("Clear");

        srand(time(NULL));

        for(i=0;i<tableSize;){
            randomNum = rand()%tableSize;
            randomNumm = rand()%tableSize;
            
            if(!arrayCheck[randomNum][randomNumm]){
                randomedMine[randomNum][randomNumm] = 1;
                winCondition[randomNum][randomNumm] = 1;
                arrayCheck[randomNum][randomNumm] = 1;
                i++;
            }
        }
    
         //Setting mineField to be all O 

        for(i=0;i<tableSize;i++){
            for(j=0;j<tableSize;j++){
            mineField[i][j] = 'O';
            }
        }

        for(i=0;i<tableSize;i++){
            for(j=0;j<tableSize;j++){
                mineCheck += randomedMine[i][j];
            }
        }
        
        fieldRemain = (tableSize*tableSize)-mineCheck-winCheck;
        
        do{
            
            for(i=0;i<tableSize;i++){
                for(j=0;j<tableSize;j++){
                    printf("%d",randomedMine[i][j]);
                }
                printf("\n");
            }

            system("clear");
            
            printf("\tField Opened: %d\t",winCheck);
            printf("\tField Remain: %d\t",fieldRemain-winCheck);
            printf("\tTotal Mine: %d\t",mineCheck);
            printf("\tTotal Field: %d\t",tableSize*tableSize);
            
            printLogo();

            printf("\n\t\t\t\t\t%d X %d MINEFIELD\n\n",tableSize,tableSize);
            
            printf("\n\t\t\t\t\t");

            for(i=0;i<tableSize;i++){
                for(j=0;j<tableSize;j++){
                printf("%c  ",mineField[i][j]);
                }
            printf("\n\t\t\t\t\t"); 
            }

            printf("\n");
            printf("Select row: ");
            scanf("%d",&rowField);
            printf("Select column: ");
            scanf("%d",&columnField);
            
            if(randomedMine[rowField-1][columnField-1] == 0){
                mineField[rowField-1][columnField-1] = 'X';
                
                if(winCondition[rowField-1][columnField-1] != 2){
                    winCondition[rowField-1][columnField-1] = 2;  
                    winCheck++;
                    
                    if(winCheck == (tableSize*tableSize)-mineCheck){
                        system("clear");
                        printLogo();
                        
                        printf("\n\t\t\t\t\t%d X %d MINEFIELD\n\n",tableSize,tableSize);
                        printf("\n\t\t\t\t\t");
                
                        for(i=0;i<tableSize;i++){
                            for(j=0;j<tableSize;j++){
                                if(winCondition[i][j] == 1){
                                    printf("*  ");
                                }

                                else if(winCondition[i][j] == 2){
                                    printf("X  ");
                                }
                                
                                else{
                                    printf("O  ");
                                }
                            }

                            printf("\n\t\t\t\t\t"); 
                        }       
                        getchar();
                        printf("\n\t\t\t\t\tYou won!\n\n\n");
                        printf("Press enter to continue\n");
                        getchar();
                        system("clear");
                        printLogo();

                        do{
                            printf("\t\t\t\t Do you want to continue? (Y/N): ");
                            scanf("%c",&userAnswer);

                            if(userAnswer == 'Y' || userAnswer == 'y'){
                                system("clear");
                                printPlay();
                            }
                            else if(userAnswer == 'N' || userAnswer == 'n'){
                                answerCheck = 0;
                                loopBreaker = 0;
                                system("clear");
                                printLogo();
                                printf("\n\t\t\t\t\tThanks for Playing!\n");
                                break;
                            }

                        }while(answerCheck == 1);
                    }
                }              
            }

            else{
                system("clear");
                printLogo();
                
                printf("\n\t\t\t\t\t%d X %d MINEFIELD\n\n",tableSize,tableSize);
                printf("\n\t\t\t\t\t");
                
                for(i=0;i<tableSize;i++){
                    for(j=0;j<tableSize;j++){
                        if(winCondition[i][j] == 1){
                            printf("*  ");
                        }
                        else if(winCondition[i][j] == 2){
                            printf("X  ");
                        }
                        else{
                            printf("O  ");
                        }
                    }
                    printf("\n\t\t\t\t\t"); 
                }       
                        getchar();
                        printf("\n\t\t\t\t\tGAME OVER!\n\n\n");
                        printf("Press enter to continue\n");
                        getchar();
                        system("clear");
                        printLogo();

                        do{
                            printf("\t\t\t\t Do you want to continue? (Y/N): ");
                            scanf("%c",&userAnswer);

                            if(userAnswer == 'Y' || userAnswer == 'y'){
                                system("clear");
                                printPlay();
                            }
                            else if(userAnswer == 'N' || userAnswer == 'n'){
                                answerCheck = 0;
                                loopBreaker = 0;
                                system("clear");
                                printMenu();
                                getchar();
                                break;
                            }

                        }while(answerCheck == 1);
                }
    
    if(loopBreaker != 0){
        system("clear");
    }
    
    }while(loopBreaker == 1);
}

void printTutorial(){

    printLogo();
    getchar();
    printf("\t\t\t\t\t How to play \n\n");
    printf("\t\t\t\t1. Select the size of the table. \n");
    printf("\t\t\t\t2. Select the desired vertical and horizontal position of the table.\n");
    
    createTable4x4(4); //Print O 4x4
    
    printf("\n");
    printf("\t\t\t\t\n\n\nPress Enter to continue\n");
    getchar();
    system("clear");
    
    printLogo();
    printf("\t\t\t\t3. If the open position is X you survived  \n ");
    printf("\t\t\t\t   and continue until the table is over.\n\n");
    printf("\t\t\t\tEnter row: 1\n");
    printf("\t\t\t\tEnter column: 1\n");
    exSurvive4x4(4); //Print X at row1 and column1
    printf("\n");
    printf("\t\t\t\t\n\n\nPress Enter to continue\n");
    getchar();
    system("clear");
    
    printLogo();
    printf("\t\t\t\t4. If the open position is * you game over!!. \n\n");
    printf("\t\t\t\tEnter row: 2\n");
    printf("\t\t\t\tEnter column: 2\n");
    exBomb4x4(4);
    printf("\n");
    printf("\t\t\t\t\n\n\nPress Enter to continue\n");
    getchar();
    system("clear");
    
    printLogo();
    printf("\t\t\t\t5. At the end of the game, you can choose to  \n");
    printf("\t\t\t\t   continue playing or close the program.");
    printf("\t\t\t\t\n\n\nPress Enter to continue\n");
    getchar();
    system("clear");
    
    printMenu();
}

void createTable4x4(int a){

    char mineField[4][4];
    int i,j;
    int loopBreaker = 1;

    srand(time(0));

    //Setting mineField to be all O

    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            mineField[i][j] = 'O';
        }
    }

    while(loopBreaker == 1)
    {
        printf("\n\t\t\t\t%d X %d TABLE\n\n",a,a);
        printf("\t\t\t\t");
        for(i=0;i<a;i++)
        {
            for(j=0;j<a;j++)
            {
                printf("%c  ",mineField[i][j]);
            }
            printf("\n\t\t\t\t");
            loopBreaker=0;
        }
    }
}
void exSurvive4x4(){

    int i,j;
    int x[4][4];
    srand(time(NULL));
    printf("\n\t\t\t\t4 X 4 TABLE\n\n\t\t\t\t");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==0 && j==0)
            {
                printf("X  ");
            }
            else
            {
                printf("O  ");
            }
        }
        printf("\n\t\t\t\t");
    }
}
void exBomb4x4(int a){
    
    char testArray[4][4];
    int i,j;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if((i==0&&j==3)||(i==2&&j==1)||(i==1&&j==1)||(i==3&&j==0)){
                testArray[i][j] = '*';
            }
            else if(i==0&&j==0){
                testArray[i][j] = 'X';
            }
            else{
                testArray[i][j] = 'O';
            }
        }
    }
    printf("\n\t\t\t\t%d X %d TABLE\n\n\t\t\t\t",a,a);
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%c  ",testArray[i][j]);
        }
        printf("\n\t\t\t\t");
    }
        printf("Game Over!!");
}

void printQuit(){
    printLogo();
    printf("\n\t\t\t\t\t\tThanks For Playing!\n\n\n\n");
}
       