using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Decorator
{
    class Milk : Decorator
    {
        public Milk(Beverage beverage)
        {
            Beverage = beverage;
        }

        public override decimal Cost()
        {
            return Beverage.Cost() + 5m;
        }

        public override string Description()
        {
            return Beverage.Description() + ", Milk";
        }
    }

    class Chocolate : Decorator
    {
        public Chocolate(Beverage beverage)
        {
            Beverage = beverage;
        }

        public override decimal Cost()
        {
            return Beverage.Cost() + 2m;
        }

        public override string Description()
        {
            return Beverage.Description() + ", Chocolate";
        }
    }
}
