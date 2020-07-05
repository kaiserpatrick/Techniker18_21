public class Kugel extends GeometrischeKoerper {

    Kugel(double r) {
        super(r, r);
    }

    public double berechneVolumen(){
        return 4.0 / 3.0 * Math.PI * Math.pow(r, 3);
    }

    public double berechneOberflaeche(){
        return 4.0 * Math.PI * Math.pow(r, 2);
    }
    
}