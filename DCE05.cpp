#include <stdio.h>
int narr[32] = {-1073741824,-536870912,-268435456,-134217728,-67108864,-33554432,-16777216,-8388608,-4194304,-2097152,-1048576,-524288,-262144,-131072,-65536,-32768,-16384,-8192,-4096,-2048,-1024,-512,-256,-128,-64,-32,-16,-8,-4,-2,-1,0};
int main(){
        int tt,t,o,n;
            for(scanf("%d",&tt),t=0; t^tt; t++){
                        for(scanf("%d",&n),o=0;!(n & narr[o++]););
                                printf("%x\n",~(64));
                                    }
                return 0;
}
