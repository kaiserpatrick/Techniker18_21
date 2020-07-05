public class Rose extends Blumen {

    Rose(){
        super(ROSE, ROT);
    }

    public void identifizieren(){
        super.identifizieren();
        System.out.print("Rose");
    }

    public void wurzeln() {
        System.out.println(" und hat Wurzeln");
    }
    
}