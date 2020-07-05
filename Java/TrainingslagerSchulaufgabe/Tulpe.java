public class Tulpe extends Blumen {

    Tulpe(){
        super(TULPE, GELB);
    }

    public void identifizieren(){
        super.identifizieren();
        System.out.print("Tulpe");
    }

    public void zwiebeln() {
        System.out.println(" und hat Zwiebeln");
    }
    
}