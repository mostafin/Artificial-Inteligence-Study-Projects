import java.util.Random;

/**
 * Created by Maciej Ostafin on 16.10.2017.
 */
public class Perceptron {
    Random generator =new Random();

    //zmienne ustawione randomowo
    public double waga0=generator.nextDouble();
    public double waga1=generator.nextDouble();
    public double waga2=generator.nextDouble();
    //2)ustawione na wartość stałą
    //public double waga0=0.5,waga1=0.5,waga2=0.5;

    public int perceptronOut (double perceptronOut)
    {
        if(perceptronOut<0)return 0;
        else return 1;
    }
    public int process ( int x0, int x1, int x2 ) {
        double y_p = x0 * waga0 + x1 * waga1 + x2 * waga2;
        return perceptronOut( y_p );
    }

    public void learn_perceptron(int x0, int x1, int x2, double y, double  wspolczynnik_postepu)
    {
        double perceptronOut = x0 * waga0 + x1 * waga1 + x2 * waga2;
        perceptronOut = perceptronOut(perceptronOut);
        waga0 += ( y - perceptronOut ) * wspolczynnik_postepu * x0;
    }

}
