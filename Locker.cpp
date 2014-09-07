  #include <stdio.h> 
  #include <stdlib.h> 
   
  /* 0 means closed; 1 means open */ 
  char locker[1000+1] = {0}; 
   
  int 
  main(int argc, char* argv[]) 
  { 
    int limit = argc>1 ? atoi(argv[1]) : 1000; 
    for (int i=1; i<=limit; i++) { 
      for (int j=i; j<=limit; j+=i) { 
        locker[j] = abs(locker[j]-1); 
      } 
    } 
    for (int i=1; i<=limit; i++) { 
      if (locker[i] == 1) 
        printf("%d ", i); 
    } 
    printf("\n"); 
    return 0; 
  } 
