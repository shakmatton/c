#include <stdio.h>

int main() 
{
    
    int p, j1, j2, r, a;     
    
    /* RULES:
    
    p = 1 (player chooses even) / p = 0 (player chooses odd)
    
    j1 and j2 = number chosen by players 1 and 2, respectively
    
    r = 1 (player one cheats) / r = 0 (player one doesn't cheat)
    
    a = 1 (player two accuses player one of cheating)
    a = 0 (player two doesn't accuse player one of cheating)
    
    Beyond classic even/odd game, if j1 cheats and is not accused by j2, j1 wins the game!
    If j1 cheats and is accused by j2, j1 is caught! J2 wins the game!
    If j2 accuses j1, but j1 didn't cheat, j1 wins the game!
    
    */
    
    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);

    // 2 GAMES: "THEFT-ACCUSING GAME" HAS PRECEDENCE OVER "EVEN-ODDS GAME"
    
        if (r == 1 && a == 0) printf("Jogador 1 ganha!\n");   // player 1 cheated and wasn't caught
        else if (r == 1 && a == 1) {            
            printf("Jogador 2 ganha!\n");
            } 
            else if (r == 0 && a == 1) {                     // player 1 didn't cheat but player 2 accused him
                printf("Jogador 1 ganha!\n");                
                }                 
                else {                                       // Normal game, no cheating nor accusing                  

                    // p1 chose even and result is also even
                    if ((j1 + j2) % 2 == 0 && p == 1) {
                        printf("Jogador 1 ganha!\n");
                    } 

                    // p1 chose odds and result is also odd
                    else if ((j1 + j2) % 2 != 0 && p == 0) {
                        printf("Jogador 1 ganha!\n");
                        }                   

                        // p1 chose something and result is something else
                        else {
                            printf("Jogador 2 ganha!\n");
                        }
                }
    
    return 0;

        
        
        
        // printf((r == 1 && a == 0) ? "Jogador 1 ganha!\n" : printf((r == 0 && a == 1) ? "Jogador 1 ganha!\n" : printf((r == 1 && a == 1) ? "Jogador 2 ganha!\n" : "Jogador 1 ganha!\n")));
                    

        /*
        if (r == 1 && a == 0) printf("Jogador 1 ganha!\n");
        // player 1 cheated and wasn't caught
        
        else {
            
            if (r == 0 && a == 1) printf("Jogador 1 ganha!\n");
            // player 1 didn't cheat but player 2 accused him
            
            else printf("Jogador 2 ganha!\n");    
            // (r == 1 && a == 1)  player 1 cheated and player 2 accused him  
            
        }
        */
            
}
