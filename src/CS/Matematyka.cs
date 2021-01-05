namespace Mat
{
    using System;
    public class Mat
    {
        static decimal PierwKw(int b)
        {
            return Convert.ToDecimal(Math.Sqrt(b));
        }
        static decimal Pierw(int b, int e)
        {
            return Convert.ToDecimal(Math.Pow(b, (1 / e)));
        }
        static ulong Potega(int a, int e)
        {
            return Convert.ToUInt64(Math.Pow(a, e));
        }
    }