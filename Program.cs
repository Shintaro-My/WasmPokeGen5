using System;
using System.Runtime.InteropServices.JavaScript;
using WasmNet.Models;
using WasmNet.Util;

Console.WriteLine("Hello, Console!");

return 0;

public partial class MyClass
{
    [JSExport]
    internal static string Greeting()
    {
        var text = $"Hello, World! Greetings from node version: {GetNodeVersion()}";
        return text;
    }

    [JSExport]
    internal static string GetInitialSeed(
        byte mac0, byte mac1, byte mac2, byte mac3, byte mac4, byte mac5,
        byte version,
        byte locale,
        byte dsType,
        int vcount,
        int timer0,
        byte year, byte month, byte day, byte hour, byte minute, byte second
    )
    {
        MacAddress mac = MacAddress.Create(mac0, mac1, mac2, mac3, mac4, mac5);
        if (!Constants.DS_FRAME.TryGetValue((DSType)dsType, out byte frame))
        {
            throw new Exception("Invalid DSType");
        }
        var date = new DateTime(year, month, day, hour, minute, second);
        var seed = new InitialSeed(
            mac,
            (GameVersion)version, (Locale)locale, (DSType)dsType,
            (uint)vcount,
            (uint)timer0,
            frame,
            0x6000000U,
            date
        );
        var iseed = seed.Calculate();
        return iseed.ToString("X");
    }

    [JSImport("node.process.version", "main.mjs")]
    internal static partial string GetNodeVersion();
}
