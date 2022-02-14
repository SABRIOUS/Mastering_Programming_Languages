
public class RandomWalker{
  public static void main(String[] args){
    int r = Integer.parseInt(args[0]);
    int x = 0;
    int y = 0;
    int step = 0;

    while (Math.abs(x)+Math.abs(y) != r ){
      System.out.println("("+x +", "+ y+")");
      double n = Math.random();
      if (Math.abs(x)+Math.abs(y) == r) break;
      else{
        if(n <= .25)       {y++;step++;   System.out.println("("+x +", "+ y+")");}
        else if (n <= .50) {x--;step++;   System.out.println("("+x +", "+ y+")");}
        else if (n <= .75) {y--;step++;   System.out.println("("+x +", "+ y+")");}
        else if (n <= 1.00){ x--;step++;  System.out.println("("+x +", "+ y+")");}
      }

    }
    System.out.println(step);
  }
}
