namespace PolskaKonwersjaTypow
{
    using System;
    template<typename Z>
    class Konwersja
    {
        
        // Na sbyte
        public static void NaBajt(Z arg)
        {
            Convert.ToSbyte(arg);
        }
        
        // Na byte
        public static void NaDodatBajt(Z arg)
        {
            Convert.ToByte(arg);
        }
        
        // Na int
        public static void NaCalk(Z arg)
        {
            Convert.ToInt32(arg);
        }
        
        // Na uint
        public static void NaDodatCalk(Z arg)
        {
            Convert.ToUInt32(arg);
        }
        
        // Na short
        public static void NaCalkMaly(Z arg)
        {
            Convert.ToInt16(arg);
        }
        
        // Na ushort
        public static void DodatCalkMaly(Z arg)
        {
            Convert.ToUInt16(arg);
        }
        
        // Na long
        public static void CalkDuzy(Z arg)
        {
            Convert.ToInt64(arg);
        }
        
        // Na ulong
        public static void DodatCalkDuzy(Z arg)
        {
            Convert.ToUInt64(arg);
        }
        
        // Na float
        public static void NaZmiennoPrzec(Z arg)
        {
            Convert.ToSingle(arg);
        }
        
        // Na double
        public static void NaZmienoPrzecPodwPrec(Z arg)
        {
            Convert.ToDouble(arg);
        }
        // Na decimal
        public static void Dziesiet(Z arg)
        {
            Convert.ToDecimal(arg);
        }

        // Na char
        public static void NaZnak(Z arg)
        {
            Convert.ToChar(arg);
        }
        
        // Na string
        public static void NaCiagZnakow(Z arg)
        {
            return Convert.ToString(arg);
        }

        // Na bool
        public static void NaLogiczny(Z arg)
        {
            Convert.ToBoolean(arg);
        }
    }
}
