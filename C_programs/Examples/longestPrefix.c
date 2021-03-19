#include<stdio.h>
#include<string.h>

int main() {
	//code
	int t, i;
	scanf("%d", &t);
	for(i = 0; i < t; i++){
	    int n;
	    scanf("%d", &n);
	    char words[n][1000]; int j;
	    for(j = 0; j < n; j++){
	        scanf("%s", &words[j]);
	    }
	    int k, flag, out = 0;
	    
	    for(j = 0; j < strlen(words[0]); j++){
	        flag = 0;
	        for(k = 1; k < n; k++){
	            if(words[k][j] == words[0][j]){
	                flag += 1;
	                continue;
	            }
	            else{
	                
	                break;
	            }
	        }
	        if(flag == n - 1){
	            out += 1;
	            printf("%c", words[0][j]);
	            continue;
	        }
	        else{
	            break;
	        }
	        
	    }
	    if(out == 0){
	        printf("-1");
	    }
	    printf("\n");
	}
	return 0;
}