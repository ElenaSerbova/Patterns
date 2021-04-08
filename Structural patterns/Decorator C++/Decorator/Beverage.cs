using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Decorator
{
    interface Beverage
    {
        decimal Cost();
        string Description();
    }

    abstract class Decorator : Beverage
    {
        public Beverage Beverage { get; set; }

        public abstract decimal Cost();
        public abstract string Description();
    }


}
