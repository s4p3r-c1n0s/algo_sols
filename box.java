
import java.io.BufferedReader;
import java.io.InputStreamReader;


class box{
    public static void main(String args[] ) throws Exception {

      int N,Q,A,B,color=1;
      String line;
      String[] arr;
      int[] clAr = new int[1000];
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        line = br.readLine();
        arr = line.split("[ ]");
        N = Integer.parseInt(arr[0]);
        Q = Integer.parseInt(arr[1]);
        for(int i=0;i<N;i++)clAr[i]=color;
        color++;
        for (int in = 0; in < Q; in++) {
            line = br.readLine();
            arr = line.split("[ ]");
            A = Integer.parseInt(arr[0]);A--;
            B = Integer.parseInt(arr[1]);B--;
            if(A>B){int t=A;A=B;B=t;};
            if(A!=B && clAr[A]==clAr[B] && clAr[A]!=-1){
               System.out.println("YES");
               int setC=clAr[B];
               boolean stopC=false;
               for(int i=A+1;i<B;i++){
                  if(clAr[i]==-1){
                     if(stopC) stopC=false;
                     else stopC=true;
                  } else {
                     if(!stopC && clAr[i]==setC) clAr[i]=color;
                  }
               }
               clAr[A]=clAr[B]=-1;
               color++;
            }
            else System.out.println("NO");
        }
    }
}
