namespace Mat
{
    using System;
    class Mat
    {
        decimal PierwKw(int b)
        {
            return Convert.ToDecimal(Math.Sqrt(b));
        }
        decimal Pierw(int b, int e)
        {
            return Convert.ToDecimal(Math.Pow(b, (1 / e)));
        }
        ulong Potega(int a, int e)
        {
            return Convert.ToUInt64(Math.Pow(a, e));
        }
    }
}