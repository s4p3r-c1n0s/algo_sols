
import java.io.BufferedReader;
import java.io.InputStreamReader;


class nice{
    public static void main(String args[] ) throws Exception {

      int enC, savE;
      boolean Xkills;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine();
        int N = Integer.parseInt(line);
        for (int in = 0; in < N; in++) {
            String X = br.readLine();
            enC =0;savE =0;
            Xkills=false;
            for(int i=0;i<X.length();i++){
               if(X.charAt(i)=='O') {if(!Xkills)enC++;}
               if(X.charAt(i)=='X'){ Xkills=true;enC=0;}
               if(X.charAt(i)=='*'){Xkills=false;savE+=enC;enC=0;}
            }
            System.out.println(savE);
        }
    }
}
