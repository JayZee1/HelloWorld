// A Hello World! program in C# 
using System;
namespace HelloWorld
{
    class Hello 
    {
        static void Main() 
        {
            System.Console.WriteLine("Hello World!");

            // Keep the console window open in debug mode.
            System.Console.WriteLine("Press any key to exit.");
            System.Console.ReadKey();
        }
    }
}