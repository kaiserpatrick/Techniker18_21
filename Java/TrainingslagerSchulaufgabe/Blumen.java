public abstract class Blumen{
  
  final static int ROSE = 0;
  final static int TULPE = 1;
  final static int NELKE = 2;
  final static String ROT = "rot";
  final static String GELB = "gelb";
  final static String BLAU = "blau";
  
  String farbe;
  int blume;

  Blumen(int blume, String farbe){
    this.blume = blume;
    this.farbe = farbe;
  }
  
  public void identifizieren(){
    System.out.print("Diese Blume ist eine ");
  }
  
  public void farbe(){
    System.out.print(", von der Farbe " + farbe);
  }
}
