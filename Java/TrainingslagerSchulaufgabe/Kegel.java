public class Kegel extends GeometrischeKoerper{

    Kegel(double r, double h) {
        super(r, h);
    }

    public double berechneVolumen(){
        return 1.0 / 3.0 * Math.PI*Math.pow(r, 2) * h;
    }

    public double berechneOberflaeche(){
        return Math.PI * Math.pow(r, 2) + Math.PI * r * Math.sqrt(Math.pow(h, 2) + Math.pow(r, 2));
    }
    
}