using System;
namespace WasmNet.Models
{
	public class MacAddress
    {
        public uint A { get; set; }
        public uint B { get; set; }
        public uint C { get; set; }
        public uint D { get; set; }
        public uint E { get; set; }
        public uint F { get; set; }

        public static MacAddress Create(uint a, uint b, uint c, uint d, uint e, uint f)
        {
            return new MacAddress()
            {
                A = a,
                B = b,
                C = c,
                D = d,
                E = e,
                F = f
            };
        }
    }
}

