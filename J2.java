// public class J2{
//   public static void  main(String[] args){
//     System.err.println("A");
//
//
//   }
// }

public class J2{
  public static void main(String[] args){
    long n = Long.parseLong(args[0]);
    for (int i=2; i <= n/i; i++)

    {
      System.out.println("first i =  "+i );
      System.out.println("[[n ]]" + n);
      while(n%i == 0){
        System.out.println("i =  "+i );
        n /= i;
        System.out.println("\n----------\n");
      }
      System.out.println("i = "+i + " n= "+n);
    }
    // if(n>1) System.out.println(n);
    // else System.out.println();
  }
}
