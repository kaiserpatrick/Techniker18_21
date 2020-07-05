public class GeometrischeKoerperTest {
    public static void main(String[] args) {
        Kugel kugel1 = new Kugel(4.5);
        Kegel kegel1 = new Kegel(4.5, 2.4);

        System.out.println("Volumen Kugel: " + kugel1.berechneVolumen());
        System.out.println("Oberflaeche Kugel: " + kugel1.berechneOberflaeche());
        System.out.println();
        System.out.println("Volumen Kegel: " + kegel1.berechneVolumen());
        System.out.println("Oberflaeche Kegel: " + kegel1.berechneOberflaeche());
    }
}