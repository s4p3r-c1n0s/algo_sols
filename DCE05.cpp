#include <stdio.h>
int narr[32] = {0,-1, -2, -4, -8, -16, -32, -64, -128, -256, -512, -1024, -2048, -4096, -8192, -16384, -32768, -65536, -131072, -262144, -524288, -1048576, -2097152, -4194304, -8388608, -16777216, -33554432, -67108864, -134217728, -268435456, -536870912, -1073741824};
int main(){
        int tt,t,o,n;
            for(scanf("%d",&tt),t=0; t^tt; t++){
                        for(scanf("%d",&n),o=0;n & narr[++o];);
                                printf("%d\n",~narr[o-1]+1);    
                                    }
                return 0;
}



