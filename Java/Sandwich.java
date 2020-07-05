class Mahlzeit {
    Mahlzeit() { System.out.println("Mahlzeit()"); }
  }
  
  class Brot {
    Brot() { System.out.println("Brot()"); }
  }
  
  class Wurst {
    Wurst() { System.out.println("Wurst()"); }
  }
  
  class Salat {
    Salat() { System.out.println("Salat()"); }
  }
  
  class Mittagessen extends Mahlzeit {
    Mittagessen() { System.out.println("Mittagessen()"); }
  }
  
  class Vesper extends Mittagessen {
    Vesper() { System.out.println("Vesper()"); }
  }
  
  class Sandwich extends Vesper {
    Brot b = new Brot();
    Wurst w = new Wurst();
    Salat s = new Salat();
    Sandwich() { System.out.println("Sandwich()"); }
    
    public static void main(String[] args) {
      new Sandwich();
    }
  }
  