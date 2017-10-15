/**
 * Created by Maciej Ostafin on 15.10.2017.
 */

public class Main {
    public static void main(String[] args)
    {
        Perceptron perceptron=new Perceptron();

        int bias=1;
        double wspolczynnik_postepu=0.1;

        //tablice wejściowe
        int[] x1 ={0,1,0,1};
        int[] x2 ={0,0,1,1};

        //tabela wynikowa dla AND
        int[] y={0,0,0,1};

        //j-ilość wykonanych pętli na konkretnym zestawie danych
        //pętla dla pierwszej danej [0,0|0]
        for ( int i = 0,j=0; j < 4; j++ ) {
            perceptron.learn_perceptron( bias, x1[i], x2[i], y[i], wspolczynnik_postepu );
        }
        //pętla dla drugiej danej [1,0|0]
        for ( int i = 1,j=0; j < 4; j++ ) {
            perceptron.learn_perceptron( bias, x1[i], x2[i], y[i], wspolczynnik_postepu );
        }
        //pętla dla trzeciej danej [0,1|0]
        for ( int i = 2,j=0; j < 4; j++ ) {
            perceptron.learn_perceptron( bias, x1[i], x2[i], y[i], wspolczynnik_postepu );
        }
        //pętla dla czwartej danej [1,1|1]
        for ( int i = 1,j=0; j < 4; j++ ) {
            perceptron.learn_perceptron( bias, x1[i], x2[i], y[i], wspolczynnik_postepu );
        }

        System.out.println( "WAGI:" );
        System.out.println( "W0 = " + perceptron.waga0 );
        System.out.println( "W1 = " + perceptron.waga1 );
        System.out.println( "W2 = " + perceptron.waga2 + "\n" );

        System.out.println( perceptron.process( bias, 0, 0 ) );
        System.out.println( perceptron.process( bias, 0, 1 ) );
        System.out.println( perceptron.process( bias, 1, 0 ) );
        System.out.println( perceptron.process( bias, 1, 1 ) );
    }
}
