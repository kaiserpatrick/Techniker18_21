class HaustierFuettern{
  
  public static void main(String[] args){
    
    Katze minka = new Katze("Minka", 5.0, 1); 
    minka.fuettern();
    minka.anzeigen();
    
    System.out.println();    //Leerzeile
  
    Hund strolchie = new Hund("Strolchie", 5.0, 1);
    strolchie.fuettern();
    strolchie.anzeigen();
  }
  
}
