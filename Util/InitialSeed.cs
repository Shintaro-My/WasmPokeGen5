using System;
using System.Collections.Generic;
using WasmNet.Models;

namespace WasmNet.Util
{
	public class InitialSeed
    {
        public MacAddress _mac;
		public Nazo _nazo;
		uint _vcount;
		uint _timer0;
		uint _frame;
		uint _gxstat;
		DateTime _datetime;

        public InitialSeed(
			MacAddress mac,
			GameVersion version,
			Locale locale,
			DSType dstype,

            uint vcount,
            uint timer0,
            uint frame,
            uint gxstat,

			DateTime dateTime
        )
		{
			_mac = mac;
			_nazo = Nazo.Create(version, locale, dstype);
            _vcount = vcount;
            _timer0 = timer0;
            _frame = frame;
            _gxstat = gxstat;
            _datetime = dateTime;
        }

		public ulong Calculate()
		{
			var ulist = new List<uint>(16);

			var num1 = _gxstat ^ _frame;
			var num2 = _vcount << 16 | _timer0;
			var num3 = (num1 >> 24 & 0xff)
				| (num1 >> 8  & 0xff00)
				| (num1 << 8  & 0xff0000)
				| (num1 << 24 & 0xff000000);

			(var mac1, var mac2) = _FormatMacAddress(_mac);
			mac1 ^= num3;

            uint word = 0x67452301;
            uint num4 = 0xefcdab89;
            uint num5 = 0xc3d2e1f0;
            uint x = 0x98badcfe;
            uint y = 0x10325476;

            var Y = (uint)_datetime.Year - 2000;
            var M = (uint)_datetime.Month;
			var D = (uint)_datetime.Day;
			var NN = (uint)_datetime.DayOfWeek;
			var h = (uint)_datetime.Hour;
            var m = (uint)_datetime.Minute;
            var s = (uint)_datetime.Second;

			// 0 - 4
			var entries = _nazo.Entries();
			for (byte i = 0; i < 5; i++)
			{
				ulist[i] = _Decorate(entries[i]);
			}

			ulist[5] = _Decorate(num2);
			ulist[6] = mac2;
			ulist[7] = mac1;

			ulist[8] = (So(Y) << 24 | So(M) << 16 | So(D) << 8) | NN;
			ulist[9] = h < 12
				? (So(h) << 24 | So(m) << 16 | So(s) << 8)
				: (So(h) + 64 << 24 | So(m) << 16 | So(s) << 8);

            ulist[10] = 0U;
            ulist[11] = 0U;
            ulist[12] = 4281270272U;
            ulist[13] = 2147483648U;
            ulist[14] = 0U;
            ulist[15] = 416U;


            for (byte i = 0; i < 16; i++)
            {
				var index = (int)(i & 15U);
				uint num6 = Rot(5, word) + f00(num4, x, y) + num5 + ulist[index] + 1518500249U;
                num5 = y;
                y = x;
                x = Rot(30, num4);
                num4 = word;
                word = num6;
            }
            for (byte i = 16; i < 20; i++)
            {
                var index = (int)(i & 15U);
                ulist[index] = Rot(1, ulist[(index + 13 & 15)] ^ ulist[(index + 8 & 15)] ^ ulist[(index + 2 & 15)] ^ ulist[index]);
                var num7 = Rot(5, word) + f00(num4, x, y) + num5 + ulist[index] + 1518500249;
                num5 = y;
                y = x;
                x = Rot(30, num4);
                num4 = word;
                word = num7;

            }
            for (byte i = 20; i < 40; i++)
            {
                var index = (int)(i & 15U);
                ulist[index] = Rot(1, ulist[(index + 13 & 15)] ^ ulist[(index + 8 & 15)] ^ ulist[(index + 2 & 15)] ^ ulist[index]);
                var num8 = Rot(5, word) + f20(num4, x, y) + num5 + ulist[index] + 1859775393;
                num5 = y;
                y = x;
                x = Rot(30, num4);
                num4 = word;
                word = num8;
            }
            for (byte i = 40; i < 60; i++)
            {
                var index = (int)(i & 15U);
                ulist[index] = Rot(1, ulist[(index + 13 & 15)] ^ ulist[(index + 8 & 15)] ^ ulist[(index + 2 & 15)] ^ ulist[index]);
                var num9 = Rot(5, word) + f40(num4, x, y) + num5 + ulist[index] - 1894007588;
                num5 = y;
                y = x;
                x = Rot(30, num4);
                num4 = word;
                word = num9;
            }
            for (byte i = 60; i < 80; i++)
            {
                var index = (int)(i & 15U);
                ulist[index] = Rot(1, ulist[(index + 13 & 15)] ^ ulist[(index + 8 & 15)] ^ ulist[(index + 2 & 15)] ^ ulist[index]);
                var num10 = Rot(5, word) + f60(num4, x, y) + num5 + ulist[index] - 899497514;
                num5 = y;
                y = x;
                x = Rot(30, num4);
                num4 = word;
                word = num10;
            }

            var num11 = word + 1732584193U;
            var num12 = num4 + 4023233417U;

            var num13 = ((num11 & 0xFF) << 24) | ((num11 & 0xFF00) << 8) | ((num11 & 0xFF0000) >> 8) | (num11 >> 24);

            var raw = (ulong)((uint)(((int)num12 & (int)byte.MaxValue) << 24 | ((int)num12 & 65280) << 8) | (num12 & 16711680U) >> 8 | num12 >> 24) << 32 | (ulong)num13;
            var seed = raw * 6726279311198226789UL + 2531011UL;

            return seed;
		}

		private (uint mac1, uint mac2) _FormatMacAddress(MacAddress mac)
		{
			var a = mac.A << 24 | mac.B << 16 | mac.C << 8 | mac.D;
			var b = mac.E << 8 | mac.F;
			return (a, b);
		}

		private static uint _Decorate(uint val)
		{
			return ((val & 0xff) << 24)
				| ((val & 0xff00) << 8)
				| ((val & 0xff0000) >> 8)
				| (val >> 24);
        }

        private static uint So(uint val)
        {
            return (((val >> 0) / 10) | 0) * 16 + (val % 10);
        }

        private static uint Rot(int bits, uint val)
        {
			return (val << bits) | (val >> (32 - bits));
        }

        private static uint f00(uint b, uint c, uint d)
        {
            return (uint)((int)b & (int)c | ~(int)b & (int)d);
        }

        private static uint f20(uint b, uint c, uint d)
        {
            return b ^ c ^ d;
        }

        private static uint f40(uint b, uint c, uint d)
        {
            return (uint)((int)b & (int)c | (int)b & (int)d | (int)c & (int)d);
        }

        private static uint f60(uint b, uint c, uint d)
        {
            return b ^ c ^ d;
        }
    }
}

