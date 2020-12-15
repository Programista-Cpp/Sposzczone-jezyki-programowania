
namespace InstrWeWy
{

    using System;
    class instrWeWy
    {
        public static int arg_i;
        public static uint arg_ui;
        public static short arg_sh;
        public static ushort arg_ush;
        public static sbyte arg_sby;
        public static byte arg_by;
        public static long arg_l;
        public static ulong arg_ul;
        public static float arg_f;
        public static double arg_db;
        public static decimal arg_dec;
        public static char arg_ch;
        public static string arg_s;
        public static bool arg_b;
        public static void StdWy(string arg)
        {
            Console.WriteLine(arg);
        }
        public static string StdWe()
        {
            arg_s = Console.ReadLine();
            return arg_s;
        }
        public static void StdWeKlaw()
        {
            Console.Read();
        }
    }
}