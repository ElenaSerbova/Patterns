using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Decorator
{
    class Espresso : Beverage
    {
        public decimal Cost()
        {
            return 15m;
        }

        public string Description()
        {
            return "Espresso";
        }


    }
}
