using System;

namespace ConsoleApplication1
{
    class Program
    {
        class Equation
        {
            private int k;
            private int b;
            private int y;

            // Constructor to set y
            public Equation(int yVal)
            {
                y = yVal;
            }

            // Method to input k and b from keyboard (inside class method)
            public void InputCoefficients()
            {
                string s;
                Console.Write("Введите k = ");
                s = Console.ReadLine();
                k = Convert.ToInt32(s);

                Console.Write("Введите b = ");
                s = Console.ReadLine();
                b = Convert.ToInt32(s);
            }

            // Method to solve for x: y = kx + b => x = (y - b) / k
            public double Root()
            {
                if (k == 0)
                {
                    throw new InvalidOperationException("Коэффициент k не может быть равен нулю.");
                }
                return (double)(y - b) / k;
            }
        }

        static void Main(string[] args)
        {
            string s;
            Console.Write("Введите y = ");
            s = Console.ReadLine();
            int y = Convert.ToInt32(s);

            // Create object with y set via constructor
            Equation eq = new Equation(y);

            // Input k and b via class method
            eq.InputCoefficients();

            // Compute and output the root
            double x = eq.Root();
            Console.WriteLine("Значение x = " + x);

            Console.ReadKey();
        }
    }
}
