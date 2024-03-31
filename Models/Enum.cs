using System;
using System.Collections.Generic;

namespace WasmNet.Models
{
	public enum Locale
	{
        JP, KO, US, DE, FR, ES, IT
    }
	public enum GameVersion
	{
        Black, White, Black2, White2
    }
	public enum DSType
	{
        NDS, NDSLite, NDSi, N3DS
    }
    // DS, DSLite, DSi_3DS
    // 8, 6, 9
    public class Constants
    {
        public static Dictionary<DSType, byte> DS_FRAME = new () {
            { DSType.NDS, 8 },
            { DSType.NDSLite, 6 },
            { DSType.NDSi, 9 },
            { DSType.N3DS, 9 }
        };
    }
}

