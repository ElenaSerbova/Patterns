using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Decorator
{
    class Program
    {
        static void Main(string[] args)
        {
            Beverage beverage = new Espresso();
            beverage = new Milk(beverage);
            beverage = new Chocolate(beverage);

            Console.WriteLine(beverage.Description());
            Console.WriteLine(beverage.Cost());

        }
    }
}
