using System;
using System.Collections.Generic;

namespace WasmNet.Models
{

    public class Nazo
    {
        public uint A { get; set; }
        public uint B { get; set; }
        public uint C { get; set; }
        public uint D { get; set; }
        public uint E { get; set; }

        public List<uint> Entries()
        {
            return new List<uint> { A, B, C, D, E };
        }

        public static Nazo Create(GameVersion version, Locale locale, DSType dstype)
        {
            switch (version)
            {
                case GameVersion.Black:
                case GameVersion.White:
                    return CreateNazoBW(version, locale, dstype);
                default:
                    return CreateNazoBW2(version, locale, dstype);
            }
        }

        public static Nazo Create(uint a, uint b, uint c, uint d, uint e)
        {
            return new Nazo()
            {
                A = a,
                B = b,
                C = c,
                D = d,
                E = e
            };
        }

        private static Nazo CreateNazoBW(GameVersion version, Locale locale, DSType dstype)
        {
            uint seed;
            switch (locale)
            {
                case Locale.US:
                    seed = version == GameVersion.Black
                        ? dstype == DSType.NDSi ? 0x02760190U : 0x022160b0U // black
                        : dstype == DSType.NDSi ? 0x027601b0U : 0x022160d0U;// white
                    return Nazo.Create(seed, seed + 0xfc, seed + 0xfc, seed + 0x148, seed + 0x148);

                case Locale.JP:
                    seed = version == GameVersion.Black
                        ? dstype == DSType.NDSi ? 0x02760190U : 0x022160b0U // black
                        : dstype == DSType.NDSi ? 0x02761150U : 0x02215f30U;// white
                    return Nazo.Create(seed, seed + 0xfc, seed + 0xfc, seed + 0x148, seed + 0x148);

                case Locale.DE:
                    seed = version == GameVersion.Black
                        ? dstype == DSType.NDSi ? 0x027602f0U : 0x02215ff0U // black
                        : dstype == DSType.NDSi ? 0x027602f0U : 0x02216010U;// white
                    return Nazo.Create(seed, seed + 0xfc, seed + 0xfc, seed + 0x148, seed + 0x148);

                case Locale.ES:
                    seed = version == GameVersion.Black
                        ? dstype == DSType.NDSi ? 0x027601f0U : 0x02216070U // black
                        : dstype == DSType.NDSi ? 0x027601f0U : 0x02216070U;// white
                    return Nazo.Create(seed, seed + 0xfc, seed + 0xfc, seed + 0x148, seed + 0x148);

                case Locale.FR:
                    seed = version == GameVersion.Black
                        ? dstype == DSType.NDSi ? 0x02760230U : 0x02216030U // black
                        : dstype == DSType.NDSi ? 0x02760250U : 0x02216050U;// white
                    return Nazo.Create(seed, seed + 0xfc, seed + 0xfc, seed + 0x148, seed + 0x148);

                case Locale.IT:
                    seed = version == GameVersion.Black
                        ? dstype == DSType.NDSi ? 0x027601d0U : 0x02215fb0U // black
                        : dstype == DSType.NDSi ? 0x027601d0U : 0x02215fd0U;// white
                    return Nazo.Create(seed, seed + 0xfc, seed + 0xfc, seed + 0x148, seed + 0x148);

                case Locale.KO:
                default:
                    seed = version == GameVersion.Black
                        ? dstype == DSType.NDSi ? 0x02761150U : 0x022167b0U // black
                        : dstype == DSType.NDSi ? 0x02761150U : 0x022167b0U;// white
                    return Create(seed, seed + 0xfc, seed + 0xfc, seed + 0x148, seed + 0x148);

            }
        }

        private static Nazo CreateNazoBW2(GameVersion version, Locale locale, DSType dstype)
        {
            (uint a, uint b, uint c) seeds;
            switch (locale)
            {
                case Locale.US:
                    seeds = version == GameVersion.Black2
                        ? dstype == DSType.NDSi ? (0x0209aee8U, 0x02039de9U, 0x027a5f70U) : (0x0209aee8U, 0x02039de9U, 0x02200010U) // black2
                        : dstype == DSType.NDSi ? (0x0209af28U, 0x02039e15U, 0x027a5e90U) : (0x0209af28U, 0x02039e15U, 0x02200050U);// white2
                    return Create(seeds.a, seeds.b, seeds.c, seeds.c + 0x54, seeds.c + 0x54);

                case Locale.JP:
                    seeds = version == GameVersion.Black2
                        ? dstype == DSType.NDSi ? (0x0209a8dcU, 0x02039ac9U, 0x027aa730U) : (0x0209a8dcU, 0x02039ac9U, 0x021ff9b0U) // black2
                        : dstype == DSType.NDSi ? (0x0209a8fcU, 0x02039af5U, 0x027aa5f0U) : (0x0209a8fcU, 0x02039af5U, 0x021ff9d0U);// white2
                    return Create(seeds.a, seeds.b, seeds.c, seeds.c + 0x54, seeds.c + 0x54);

                case Locale.DE:
                    seeds = version == GameVersion.Black2
                        ? dstype == DSType.NDSi ? (0x0209ae28U, 0x02039d69U, 0x027a6110U) : (0x0209ae28U, 0x02039d69U, 0x021fff50U) // black2
                        : dstype == DSType.NDSi ? (0x0209ae48U, 0x02039d95U, 0x027a6010U) : (0x0209ae48U, 0x02039d95U, 0x021fff70U);// white2
                    return Create(seeds.a, seeds.b, seeds.c, seeds.c + 0x54, seeds.c + 0x54);

                case Locale.ES:
                    seeds = version == GameVersion.Black2
                        ? dstype == DSType.NDSi ? (0x0209aea8U, 0x02039db9U, 0x027a6070U) : (0x0209aea8U, 0x02039db9U, 0x021fffd0U) // black2
                        : dstype == DSType.NDSi ? (0x0209aec8U, 0x02039de5U, 0x027a5fb0U) : (0x0209aec8U, 0x02039de5U, 0x021ffff0U);// white2
                    return Create(seeds.a, seeds.b, seeds.c, seeds.c + 0x54, seeds.c + 0x54);

                case Locale.FR:
                    seeds = version == GameVersion.Black2
                        ? dstype == DSType.NDSi ? (0x0209af08U, 0x02039df9U, 0x027a5f90U) : (0x0209af08U, 0x02039df9U, 0x02200030U) // black2
                        : dstype == DSType.NDSi ? (0x0209af28U, 0x02039e25U, 0x027a5ef0U) : (0x0209af28U, 0x02039e25U, 0x02200050U);// white2
                    return Create(seeds.a, seeds.b, seeds.c, seeds.c + 0x54, seeds.c + 0x54);

                case Locale.IT:
                    seeds = version == GameVersion.Black2
                        ? dstype == DSType.NDSi ? (0x0209ade8U, 0x02039d69U, 0x027a5f70U) : (0x0209ade8U, 0x02039d69U, 0x021fff10U) // black2
                        : dstype == DSType.NDSi ? (0x0209ae28U, 0x02039d95U, 0x027a5ed0U) : (0x0209ae28U, 0x02039d95U, 0x021fff50U);// white2
                    return Create(seeds.a, seeds.b, seeds.c, seeds.c + 0x54, seeds.c + 0x54);

                case Locale.KO:
                default:
                    seeds = version == GameVersion.Black2
                        ? dstype == DSType.NDSi ? (0x0209b60cU, 0x0203a4d5U, 0x02200770U) : (0x0209b60cU, 0x0203a4d5U, 0x02200750U) // black2
                        : dstype == DSType.NDSi ? (0x0209b62cU, 0x0203a501U, 0x027a57b0U) : (0x0209b62cU, 0x0203a501U, 0x02200770U);// white2
                    return Create(seeds.a, seeds.b, seeds.c, seeds.c + 0x54, seeds.c + 0x54);
            }
        }
    }
}

