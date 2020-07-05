public abstract class GeometrischeKoerper {
    double r;
    double h;

    GeometrischeKoerper(double r, double h) {
        this.r = r;
        this.h = h;
    }

    public abstract double berechneVolumen();
    public abstract double berechneOberflaeche();
    
}